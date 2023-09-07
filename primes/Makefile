primes.bin:	primes.obj
	link primes.obj,plm80.lib to primes.rel MAP
	locate primes.rel TO primes.abs CODE\(8000h\) MAP
	objcore primes.abs primes.bin

primes.obj:	primes.plm
	-plm80c primes.plm

clean:
	rm *.obj
