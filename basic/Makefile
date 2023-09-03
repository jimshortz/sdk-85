all:	basic.bin

basic.bin:	basic.obj
	objcore basic.obj basic.bin

basic.obj:	basic.a80
	asm80 basic.a80

clean:
	rm *.obj *.bin
