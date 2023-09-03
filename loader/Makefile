all:	loader.bin xsum

loader.bin:	loader.obj
	objcore loader.obj loader.bin

loader.obj:	loader.a80
	asm80 loader.a80 PAGEWIDTH\(80\)

xsum:	xsum.c
	$(CC) -Wall -o xsum xsum.c
