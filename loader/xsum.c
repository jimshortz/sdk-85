/************************************************************************
 * Simple program to compute 8-bit checksum of a host file.
 *
 * by Jim Shortz
 * Sep 2023
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* f;
    unsigned char c = 0;

    if (argc != 2) {
	fprintf(stderr, "Usage:\nxsum filename\n");
	exit(1);
    }
    
    f = fopen(argv[1],"r");
    if (!f) {
	fprintf(stderr, "Could not open %s\n", argv[1]);
	exit(2);
    }
	
    while (!feof(f)) {
	c += fgetc(f);
    }

    printf("0%02Xh\n", c);
}
