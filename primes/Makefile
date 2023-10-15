all:	primes.hex

primes.hex:	primes.obj
	link primes.obj,plm80.lib to primes.rel MAP
	locate primes.rel TO primes.abs CODE\(8000h\) MAP
	objhex primes.abs primes.hex
	-rm primes.rel primes.abs

%.obj:	%.plm
	-plm80c $< CODE

clean:
	rm *.obj *.abs *.rel *.bin *.hex
