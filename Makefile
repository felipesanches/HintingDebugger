CUSTOM_FT=~/custom_ft
FLAGS=-DFT_DIAGNOSTICS \
      -I $(CUSTOM_FT)/include/freetype2/ \
      -L $(CUSTOM_FT)/lib/ \
      -lm -lfreetype

all:
	gcc HintingDebugger.c $(FLAGS) -o HintingDebugger
clean:
	rm HintingDebugger
