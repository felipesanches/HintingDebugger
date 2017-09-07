CUSTOM_FT=~/custom_ft
all:
	gcc HintingDebugger.c -I $(CUSTOM_FT)/include/freetype2/ -L $(CUSTOM_FT)/lib/ -lm -lfreetype -o HintingDebugger
clean:
	rm HintingDebugger
