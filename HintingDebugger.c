// (c)2017 Felipe C. da S. Sanches
// Released under the terms of the GNU General Public License, version 3 or later
//
// This is a minimalistic client for the proposed freetype diagnostics API
// as discussed at http://lists.gnu.org/archive/html/freetype-devel/2017-09/msg00011.html

#include <math.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H
#include FT_MODULE_H
#include "RasterMessages.h"

int verbose = 0;
int diagnostics(FT_DiagnosticsMsgId  msgId,
                const char* const    opcode,
                int                  range_base,
                int                  is_composite,
                int                  IP,
                int                  callTop,
                int                  opc,
                int                  start){
    for (int i=0; msgs[i].id != -1; i++){
        if (msgs[i].id == msgId){
            if (verbose){
                printf("\t\t[%04X: %s] '%s': %s (range_base: %d is_composite: %d callTop: %d opc: %d, start: %d)\n",
                       IP, opcode, msgs[i].title, msgs[i].message, range_base, is_composite, callTop, opc, start);
            } else {
                printf("%s: %s\n", msgs[i].title, msgs[i].message);
            }
            return 0;
        }
    }
    //otherwise
    return -1;
};

void run_rasterization_tests (FT_Library   library,
                              FT_Face      face,
                              const char*  interpreter_version,
                              FT_Int32     load_flags){
    FT_Property_Set( library, "truetype", "interpreter-version", interpreter_version );
    for (int pt_size = 4; pt_size < 72; pt_size++){
        if (verbose) printf("\t Testing size = %d\n", pt_size);
        FT_Set_Char_Size(
            face,    /* handle to face object           */
            pt_size, /* char_width in 1/64th of points  */
            pt_size, /* char_height in 1/64th of points */
            72,      /* horizontal device resolution    */
            72);     /* vertical device resolution      */
        FT_Diagnostics_Set(face, diagnostics);
        for (unsigned int glyph_index = 0; glyph_index < face->num_glyphs; glyph_index++){
            FT_Load_Glyph(face, glyph_index, load_flags);
        }
        FT_Diagnostics_Unset(face);
    }
}

int main(int argc, char** argv){
	FT_Library library;
	FT_Face face;
        FT_Int32 flags = FT_LOAD_DEFAULT | FT_LOAD_NO_AUTOHINT | FT_LOAD_COMPUTE_METRICS;

        if (argc != 2){
		fprintf(stderr, "usage:\n\t%s filename.ttf\n\n", argv[0]);
		return -1;
	}

        // Unix philosophy: Silence == Success
        //
        // TODO: use argparse to enable an optional --verbose mode.
        // For now it is disabled so that only actual errors are output.
        verbose = 0;

	if (FT_Init_FreeType( &library )){
		fprintf(stderr, "An error occurred during the freetype library initialization...\n\n");
		return -1;
	}

	if ( FT_New_Face( library,
                          argv[1],
                          0, &face ) ){
		fprintf(stderr, "An error occurred while attempting to load the fontface...\n\n");
		return -1;
	}

	if (verbose) printf("[ Testing | Black & White ]\n");
	run_rasterization_tests (library, face, "35", flags | FT_LOAD_MONOCHROME | FT_LOAD_TARGET_MONO);

	if (verbose) printf("[ Testing | Grayscale ]\n");
	run_rasterization_tests (library, face, "35", flags | FT_LOAD_TARGET_NORMAL);

	if (verbose) printf("[ Testing | Cleartype ]\n");
	run_rasterization_tests (library, face, "40", flags | FT_LOAD_TARGET_LCD);

	return 0;
}
