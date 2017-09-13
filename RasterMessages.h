typedef struct
{
    FT_DiagnosticsMsgId  id;
    const char*          title;
    const char*          message;
} DiagnosticsMessage;

DiagnosticsMessage msgs[] = {
  {
    FT_RASTER_ERROR_3_USED_FOR_PERIOD,
    "Reserved value of 3 used for period",
    "For the instructions SROUND and S45ROUND, the period value of 3 is reserved and should not be used."
  },
  {
    FT_RASTER_ERROR_BITS_10_AND_13_SET,
    "Bits 10 and 13 are set, they are mutually exclusive.",
    "The following pairs of bits are mutually exclusive: 10 and 13; 8 and 11; 9 and 12. Make sure mutually exclusive bits of the flags field are not set together."
  },
  {
    FT_RASTER_ERROR_BITS_8_AND_11_SET,
    "Bits 8 and 11 are set, they are mutually exclusive.",
    "The following pairs of bits are mutually exclusive: 10 and 13; 8 and 11; 9 and 12. Make sure mutually exclusive bits of the flags field are not set together."
  },
  {
    FT_RASTER_ERROR_BITS_9_AND_12_SET,
    "Bits 9 and 12 are set, they are mutually exclusive.",
    "The following pairs of bits are mutually exclusive: 10 and 13; 8 and 11; 9 and 12. Make sure mutually exclusive bits of the flags field are not set together."
  },
  {
    FT_RASTER_ERROR_CONTOUR_OUT_OF_RANGE,
    "Contour out of range.",
    "Either the zero-based contour value exceeds the larger of the maxp table values of maxContours-1 and maxCompositeContours-1, or the zero-based contour value exceeds value for number of contours in outline - 1."
  },
  {
    FT_RASTER_ERROR_CVT_OUT_OF_RANGE,
    "CVT Out of range.",
    "Zero-based value for CVT index exceeds number of entries in CVT table - 1."
  },
  {
    FT_RASTER_ERROR_DIVIDE_BY_ZERO,
    "Divide by zero.",
    "The DIV instruction attempted to divide by zero."
  },
  {
    FT_RASTER_ERROR_EIF_WITHOUT_IF,
    "EIF found without IF.",
    "An EIF was found that did not correspond with an IF."
  },
  {
    FT_RASTER_ERROR_ELSE_WITHOUT_EIF,
    "ELSE found without EIF.",
    "An ELSE was found that did not correspond with an EIF."
  },
  {
    FT_RASTER_ERROR_ELSE_WITHOUT_IF,
    "ELSE found without IF.",
    "An ELSE was found that did not correspond with an IF."
  },
  {
    FT_RASTER_ERROR_ENDF_BEYOND_64K_OF_FDEF,
    "ENDF beyond 64K of FDEF.",
    "A function length cannot exceed 64K in size. An ENDF was found more than 64K away from its corresponding FDEF."
  },
  {
    FT_RASTER_ERROR_ENDF_BEYOND_64K_OF_IDEF,
    "ENDF beyond 64K of IDEF.",
    "A user-defined instruction cannot exceed 64K in size. An ENDF was found more than 64K away from its corresponding IDEF."
  },
  {
    FT_RASTER_ERROR_ENDF_EXECUTED,
    "ENDF found without FDEF or IDEF.",
    "An ENDF was found without its corresponding FDEF or IDEF."
  },
  {
    FT_RASTER_ERROR_EXCEEDS_INSTR_DEFS_IN_MAXP,
    "IDEF exceeds max instruction defs in maxp.",
    "The number of instructions defined exceeds value for maxInstructionDefs in maxp."
  },
  {
    FT_RASTER_ERROR_FDEF_FOUND_IN_FDEF,
    "FDEF found within FDEF - ENDF pair.",
    "A function cannot be defined within another function or user-defined instruction."
  },
  {
    FT_RASTER_ERROR_FDEF_FOUND_IN_IDEF,
    "FDEF found within IDEF - ENDF pair.",
    "A function cannot be defined within another function or user-defined instruction."
  },
  {
    FT_RASTER_ERROR_FDEF_OUT_OF_RANGE,
    "FDEF out of range.",
    "Zero-based value for function number exceeds the maxp value for maxFunctionsDefs - 1."
  },
  {
    FT_RASTER_ERROR_FDEF_SPACE_NOT_DEFINED,
    "Function definition space not defined.",
    "The called function was not properly defined. Make sure function was defined in either the font program or the pre-program."
  },
  {
    FT_RASTER_ERROR_FDEF_WITHOUT_ENDF,
    "FDEF found without ENDF.",
    "An FDEF was found that did not correspond with an ENDF."
  },
  {
    FT_RASTER_ERROR_FUCOORDINATE_OUT_OF_RANGE,
    "Funit coordinate out of range must be -16384 .. 16383.",
    "Font Unit values must be in the range of -16384 to 16383."
  },
  {
    FT_RASTER_ERROR_FUNCTION_NOT_DEFINED,
    "Function not defined.",
    "The called function was not properly defined. Make sure function was defined in either the font program or the pre-program."
  },
  {
    FT_RASTER_ERROR_IDEF_FOUND_IN_FDEF,
    "IDEF found within FDEF - ENDF pair.",
    "A user-defined instruction cannot be defined within another user-defined instruction or function."
  },
  {
    FT_RASTER_ERROR_IDEF_FOUND_IN_IDEF,
    "IDEF found within IDEF - ENDF pair.",
    "A user-defined instruction cannot be defined within another user-defined instruction or function."
  },
  {
    FT_RASTER_ERROR_IDEF_WITHOUT_ENDF,
    "IDEF found without ENDF.",
    "An IDEF was found that did not correspond with an ENDF."
  },
  {
    FT_RASTER_ERROR_IF_WITHOUT_EIF,
    "IF found without corresponding EIF.",
    "An IF was found that did not correspond with an EIF."
  },
  {
    FT_RASTER_ERROR_INST_OPCODE_TO_LARGE,
    "Instruction OpCode is to large. Must be between 0 and 255.",
    "The instruction OpCode you are trying to define is too large. The OpCode is 8-bits in size, and can only have a value of 0-255."
  },
  {
    FT_RASTER_ERROR_INSTR_DEFD_BY_FS,
    "Instruction already defined by rasterizer.",
    "There is an attempt to create a user-defined instruction that is already defined by the rasterizer."
  },
  {
    FT_RASTER_ERROR_INVALID_COMPENSATION_FLAG,
    "Invalid Instruction flag.",
    "For the instructions MDRP, MIRP, ROUND, and NROUND, the value 3 has been used as distance type for engine characteristic compensation. For these instructions, two bits of the instruction flags are designated for the distance type for engine characteristic compensation. Valid values are 0 for Gray, 1 for Black and 2 for White."
  },
  {
    FT_RASTER_ERROR_INVALID_INSTRUCTION,
    "Invalid Instruction.",
    "Attempt to execute an instruction which is invalid and has not been defined."
  },
  {
    FT_RASTER_ERROR_INVALID_MAXZONES_IN_MAXP,
    "Invalid maxZones in maxp table.",
    "The value for maxZones in maxp must be either 1 or 2: 1 if you do not use the twilight zone, and 2 if you do."
  },
  {
    FT_RASTER_ERROR_INVALID_STACK_ACCESS,
    "Attempt to access stack element out of range.",
    "Make sure the value for the index will not access a stack element which is either above the top of the stack or below the bottom of the stack. Stack index must be greater than or equal to 1."
  },
  {
    FT_RASTER_ERROR_INVALID_ZONE,
    "Invalid zone.",
    "Valid values for zone are: 0 or 1 if maxZones in maxp is 2; 1 if maxZones in maxp1 is 1."
  },
  {
    FT_RASTER_ERROR_INVALID_ZONE_IN_IUP,
    "ZP2 in IUP does not point to zone 1.",
    "IUP operates on points in the glyph zone pointed to by ZP2. This zone should always be zone 1. IUP cannot operate on the twilight zone."
  },
  {
    FT_RASTER_ERROR_INVALID_ZONE_NO_TWI,
    "No twilight zone defined. Invalid zone.",
    "There is an attempt to use the twilight zone when it does not exist because maxZones in maxp is 1. The value for maxZones should be set to 2 if the twilight zone is going to be used."
  },
  {
    FT_RASTER_ERROR_JMP_BEFORE_BEGINNING,
    "Jump before beginning of program or function.",
    "There is an attempt to use one of the jump instructions to jump to an offset in the instruction stream which is before the beginning of the program or function."
  },
  {
    FT_RASTER_ERROR_JMP_BEYOND_2MORE_THAN_END,
    "Jump beyond 2 bytes past end of function or program.",
    "There is an attempt to use one of the jump instructions to jump to an offset in the instruction stream which is more than 2 bytes beyond the end of the function or program."
  },
  {
    FT_RASTER_ERROR_MATH_OVERFLOW,
    "Math overflow.",
    "The result of either ADD, SUB, MUL, or DIV is an overflow. The result cannot fit into an F26Dot6 value."
  },
  {
    FT_RASTER_ERROR_NOT_CALLED_FROM_PREPROGRAM,
    "Not called from pre-program.",
    "Make sure you only make this call from the pre-program.&lt;BR&gt;&lt;BR&gt;FDEF and IDEF can only be called from the font program or pre-program. INSTCTRL[ ] can only be called from the pre-program."
  },
  {
    FT_RASTER_ERROR_OVERFLOW_INST_PTR,
    "Overflow Instruction Stream.",
    "One of the PUSH instructions has tried to push data which is beyond the end of the instruction stream."
  },
  {
    FT_RASTER_ERROR_POINT_OUT_OF_RANGE,
    "Point out of range.",
    "Either the zero-based point value exceeds the larger of the maxp table values of maxPoints - 1 and maxCompositePoints - 1, or the zero-based point value exceeds value for the number of points in outline - 1, including phantom points."
  },
  {
    FT_RASTER_ERROR_PREPROGAM_ZONE_NOT_TWI,
    "Zone referenced in pre-program is not the twilight zone.",
    "If you are operating in the pre-program, a zone referenced must be the twilight zone since the context does not include a particular glyph and there are no actual points."
  },
  {
    FT_RASTER_ERROR_REFPOINT_USED_BUT_NOT_SET,
    "Reference point used but not set.",
    "ERROR: Required field missing"
  },
  {
    FT_RASTER_ERROR_RESERVED_BIT_SET,
    "At least one reserved bit is set.",
    "At least one reserved bit of the flags field is set. Make sure it is clear since it is reserved for future use."
  },
  {
    FT_RASTER_ERROR_RP1_RP2_SAME_POS_ON_PROJ,
    "RP1 and RP2 have the same position on the projection vector.",
    "For the IP instruction, it is illegal if RP1 and RP2 have the same position on the projection vector."
  },
  {
    FT_RASTER_ERROR_SELECTOR_INVALID,
    "Selector invalid.",
    "The selector value is outside valid range."
  },
  {
    FT_RASTER_ERROR_STACK_OVERFLOW,
    "Stack Overflow.",
    "There is an attempt to PUSH more data on the stack than space will accommodate. Adjust maxStackElements field in the maxp table."
  },
  {
    FT_RASTER_ERROR_STACK_UNDERFLOW,
    "Stack Underflow.",
    "There is an attempt to POP a value from below the bottom of the stack. Make sure the data you are popping from the stack has been pushed onto the stack."
  },
  {
    FT_RASTER_ERROR_STORAGE_OUT_OF_RANGE,
    "Storage index out of range.",
    "Zero-based storage index exceeds the maxp value for maxStorage - 1. Adjust maxp accordingly."
  },
  {
    FT_RASTER_ERROR_STORE_INDEX_NOT_WRITTEN_TO,
    "Storage location not written to.",
    "The storage location has not been written to. This means that the data in the storage location is not valid."
  },
  {
    FT_RASTER_ERROR_TWILIGHT_ZONE_PT_NOT_SET,
    "Twilight zone point not set.",
    "A twilight zone point has not been set and is not valid. Make sure it is set with an instruction like MDAP before it is used."
  },
  {
    FT_RASTER_ERROR_VALUE_INVALID_0_OR_1,
    "Value invalid should be 0 or 1.",
    "If the selector for the INSTCTRL instruction is 1, then valid values for the value parameter are 0 or 1."
  },
  {
    FT_RASTER_ERROR_VALUE_INVALID_0_OR_2,
    "Value invalid should be 0 or 2.",
    "If the selector for the INSTCTRL instruction is 2, then valid values for the value parameter are 0 or 2."
  },
  {
    FT_RASTER_ERROR_VALUE_OUT_OF_RANGE,
    "Value out of range.",
    "The value is outside its value range."
  },
  {
    FT_RASTER_ERROR_VALUE_TO_LARGE_FOR_INT16,
    "Value exceeds capacity of 2 byte number.",
    "The value is too big to fit into a 16-bit (2-byte) number."
  },
  {
    FT_RASTER_ERROR_VALUE_TO_LARGE_FOR_INT8,
    "Value exceeds capacity of 1 byte number.",
    "The value is too big to fit into an 8-bit (1-byte) number."
  },
  {
    FT_RASTER_ERROR_VALUE_TO_SMALL,
    "Value too small.",
    "The value is less than the smallest allowed value."
  },
  {
    FT_RASTER_ERROR_VECTOR_XY_INVALID,
    "X and Y components of vector are invalid. X^2 + Y^2 != 0x4000^2.",
    "Values to be put on the stack are based on normalized vector lengths and must be set such that (X^2 + Y^2) is 1. 0x4000 is the hex representation of 1 in 2.14 format."
  },
  {
    FT_RASTER_ERROR_VECTOR_XY_ZERO,
    "X and Y components of vector are 0.",
    "The X and Y components of a vector passed to SPVFS or SFVFS cannot be 0."
  },
  {
    FT_RASTER_ERROR_ZONE_NOT_0_NOR_1,
    "Zone not 0 nor 1.",
    "The zone is set to something other than 0 or 1."
  },
  {
    FT_RASTER_WARNING_APPLE_ONLY_INSTR,
    "Instruction is only valid on the Apple platform.",
    "This warning indicates that the instruction used is not valid under Windows. The instruction is only valid on Apple platforms. Please consult Apple documentation to find out for which versions of the Mac OS the instruction is valid."
  },
  {
    FT_RASTER_WARNING_CALL_ZERO_LEN_FUNC,
    "CALL to zero length function.",
    "A call to a zero length function should be avoided because it wastes an instruction (although it is legal)."
  },
  {
    FT_RASTER_WARNING_CALL_ZERO_LEN_UD_INSTR,
    "Call to zero length user defined instruction.",
    "A call to a zero length user-defined instruction should be avoided because it wastes an instruction (although it is legal)."
  },
  {
    FT_RASTER_WARNING_DEBUG_FOUND,
    "DEBUG found which should not be found in production code.",
    "Remove all DEBUG statements before shipping this font."
  },
  {
    FT_RASTER_WARNING_DELTAC_IN_GLYPH_PGM,
    "Repeated executions in glyph programs can have unexpected results.",
    "The DELTAC instruction changes the value of CVT entries. If this is executed in a glyph program, every time that glyph is hinted the CVT entry is changed. These changes will accumulate and cause a result that the hinter might not have expected."
  },
  {
    FT_RASTER_WARNING_HI_PT_LESS_THAN_LOW_PT,
    "High point is less than low point.",
    "If the value for the high point is less than the low point, the instruction will do nothing."
  },
  {
    FT_RASTER_WARNING_JMP_OFFSET_ZERO,
    "Jump offset zero.",
    "The jump offset is zero which means that execution will jump back to this jump instruction."
  },
  {
    FT_RASTER_WARNING_LOOP_NOT_1_AT_END_OF_PGM,
    "Loop variable not 1 at end of program. This means it was set but not used.",
    "At the end of the execution of the instructions for a glyph, the loop variable was not 1, which means that it was set and not used by any other instructions. In this case, the SLOOP instruction is wasted."
  },
  {
    FT_RASTER_WARNING_LOOPCALL_COUNT_LESS_THAN_ONE,
    "Value for count is less than 1. Function will not be called.",
    "The 'value for count' is the number of times LOOPCALL will call the function. In the LOOPCALL instruction, if the value for count is less than 1, the function will not be called."
  },
  {
    FT_RASTER_WARNING_MPS_ALWAYS_12_ON_WINDOWS,
    "Windows 95 and Windows 3.1 will always return 12 in response to the MPS instruction. This is a side effect of the way the TrueType rasterizer was integrated into Windows."
  },
  {
    FT_RASTER_WARNING_PF_VECTORS_AT_OR_NEAR_PERP,
    "Projection and freedom vectors at or near perpendicular.",
    "The current projection and freedom vectors are at or near perpendicular. This could cause points to move in an unexpected manner."
  },
  {
    FT_RASTER_WARNING_PT_NOT_TOUCHED,
    "Point not touched.",
    "Untouching a point that is not touched. This is a waste of an instruction."
  },
  {
    FT_RASTER_INFO_POSTSCRIPT_OUTLINES,
    "WARNING: Rasterization for fonts with PostScript outlines not implemented yet.",
    "Rasterization could not be performed because the font file has PostScript outlines."
  },
  {
    -1, NULL, NULL
  }
};
