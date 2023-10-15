all:	basic.hex

%.hex:	%.obj
	objhex $< $@

%.obj:	%.a80
	asm80 $<

clean:
	-rm *.obj *.lnk *.bin *.lst *.hex *~

