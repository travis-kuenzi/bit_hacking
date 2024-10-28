CFLAGS= -g -Wall
.PHONY: all
all: bit_hack 

bit_hack: bit_hack.o 

.PHONY: clean
clean:
	rm -f bit_hack.o bit_hack 
