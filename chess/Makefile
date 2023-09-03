all:	sdk85.bin original.bin

original.bin:	original.a80
	z80asm -ooriginal.bin original.a80

sdk85.bin:	sdk85.z80
	z80asm -lsdk85.lst -osdk85.bin sdk85.z80

original.dis:
	z80dasm -a -l -g 0 -o original.dis -b original.blk -S original.sym original.bin

