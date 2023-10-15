all:	sdk85.hex original.bin

original.bin:	original.a80
	z80asm -ooriginal.bin original.a80

sdk85.bin:	sdk85.z80
	z80asm -lsdk85.lst -osdk85.bin sdk85.z80

original.dis:
	z80dasm -a -l -g 0 -o original.dis -b original.blk -S original.sym original.bin

%.hex:	%.bin
	srec_cat $< -binary -offset 0x8000 -output $@ -intel -address-length=2 -Execution_Start_Address 0x8000

clean:
	-rm *.obj *.hex *.bin
