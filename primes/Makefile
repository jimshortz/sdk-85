all:	primes.hex

primes.abs:	primes.obj
	link primes.obj,plm80.lib to primes.rel MAP
	locate primes.rel TO primes.abs CODE\(8000h\) MAP

%.obj:	%.plm
	-plm80c $< CODE

%.hex:	%.abs
	objhex $< $@

%.bin:	%.abs
	objcore $< $@

clean:
	rm *.obj *.abs *.rel *.bin *.hex
