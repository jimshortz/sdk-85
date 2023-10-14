all:	epmgr8000.hex

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
	../loader/xsum $@

%.hex:	%.obj
	objhex $< $@

clean:
	-rm *.obj *.lnk *.bin *.lst *.hex
