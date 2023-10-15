all:	minloader.obj hexload800.hex hexloadf800.bin epmgr8000.hex


hexload800.obj:	hexload.obj
	locate $< TO $@ CODE\(00800h\) STACK\(2000h\) MAP SYMBOLS PUBLICS

hexloadf800.obj:	hexload.obj
	locate $< TO $@ CODE\(0F800h\) MAP SYMBOLS PUBLICS

hexload.obj:	hload.obj io.obj
	link hload.obj,io.obj,plm80.lib to hexload.obj

hload.obj:	hload.plm
	-plm80c hload.plm CODE

%.bin:	%.obj
	objcore $< $@

%8000.obj:	%.lnk
	locate $< TO $@ CODE\(8000h\) MAP SYMBOLS PUBLICS

epmgr.lnk:	epmgr.obj eprom.obj io.obj
	link epmgr.obj,eprom.obj,io.obj,../plm80.lib to $@

%.obj:	%.plm
	-plm80c $< CODE OPTIMIZE

%.obj:	%.a80
	asm80 $<

%.bin:	%.obj
	objcore $< $@

%.hex:	%.obj
	objhex $< $@

clean:
	-rm *.obj *.lnk *.bin *.lst *.hex *~
