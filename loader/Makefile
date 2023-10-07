all:	xsum loader800.bin loader2000.bin hexload800.bin hexloadf800.bin

loader800.obj:	loader.obj
	locate $< TO $@ CODE\(00800h\) STACK\(2000h\) MAP SYMBOLS PUBLICS	

loader2000.obj:	loader.obj
	locate $< TO $@ CODE\(2000h\) MAP SYMBOLS PUBLICS

loader.obj:	loader.a80
	asm80 loader.a80 PAGEWIDTH\(80\)

xsum:	xsum.c
	$(CC) -Wall -o xsum xsum.c

hexload800.obj:	hexload.obj
	locate $< TO $@ CODE\(00800h\) STACK\(2000h\) MAP SYMBOLS PUBLICS

hexloadf800.obj:	hexload.obj
	locate $< TO $@ CODE\(0F800h\) MAP SYMBOLS PUBLICS

hexload.obj:	hload.obj sys.obj
	link hload.obj,sys.obj,plm80.lib to hexload.obj

hload.obj:	hload.plm
	-plm80c hload.plm CODE

io.obj:	io.plm
	-plm80c io.plm CODE

altio.obj:	altio.plm
	-plm80c altio.plm CODE

sys.obj:	sys.a80
	asm80 sys.a80

%.bin:	%.obj
	objcore $< $@

clean:
	-rm xsum *.obj *.bin *.obj *.hex *.lst *.abs *.rel *~
