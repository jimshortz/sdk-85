all:	simon.hex

simon.obj:	simon.a80
	asm80 simon.a80 PAGEWIDTH\(80\)

simon.hex:	simon.obj
	objhex simon.obj to simon.hex

clean:
	rm simon.hex simon.obj simon.lst
