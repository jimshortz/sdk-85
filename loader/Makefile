all:	loader.bin xsum hexload.bin

loader.bin:	loader.obj
	objcore loader.obj loader.bin

loader.obj:	loader.a80
	asm80 loader.a80 PAGEWIDTH\(80\)

xsum:	xsum.c
	$(CC) -Wall -o xsum xsum.c

hexload.bin:	hload.obj sys.obj
	link hload.obj,sys.obj,plm80.lib to hexload.rel
	locate hexload.rel TO hexload.abs CODE\(0F800h\) MAP SYMBOLS PUBLICS
	objcore hexload.abs hexload.bin

hload.obj:	hload.plm
	-plm80c hload.plm CODE

io.obj:	io.plm
	-plm80c io.plm CODE

altio.obj:	altio.plm
	-plm80c altio.plm CODE

sys.obj:	sys.a80
	asm80 sys.a80

clean:
	-rm xsum *.obj *.bin *.obj *.hex *.lst *.abs *.rel *~
