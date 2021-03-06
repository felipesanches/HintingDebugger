# Overview
This is a minimalist C client for the proposed freetype diagnostics API as discussed at http://lists.gnu.org/archive/html/freetype-devel/2017-09/msg00011.html

This code requires a custom build of freetype. The corresponding library source code is available at:
https://github.com/felipesanches/freetype2/tree/2.6.4.diagnostics

# Example usage

Build and install the custom freetype library:

    mkdir /home/username/custom_ft
    cd freetype2
    ./autogen.sh
    CFLAGS=-DFT_DIAGNOSTICS ./configure --prefix=/home/username/custom_ft
    make
    make install

Then build this example client and run it:

    cd HintingDebugger
    make
    LD_PRELOAD=~/custom_ft/lib/libfreetype.so ./HintingDebugger ~/gfonts/ofl/nunito/Nunito-Regular.ttf

# Verbosity

This program follows the UNIX philosiphy of "silence == success", meaning that only error messages are printed to stdout, unless the user explicitly asks for verbosity. (But the --verbose flag is *not yet* implemented...)
