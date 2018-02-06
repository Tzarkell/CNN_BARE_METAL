#include <stdio.h>
#include <time.h>
/*
// Bare-minimum start-up code to run NEON code
// Part 2.1.7, p29 of "Neon Programmer's guide.pdf"
__asm void EnableNEON(void){
    MRC p15,0,r0,c1,c0,2
    ORR r0,r0,#0x00f00000

    MCR p15,0,r0,c1,c0,2
    ISB
    MOV r0,#0x40000000
    MSR FPEXC,r0
}

int main(int argc, char** argv) {
	int i;
	double time;
	clock_t end;
	clock_t begin = clock();

	#pragma unroll(16)
	for(i=0; i< 16; i++){
		printf("Hello from Semi-Hosted ARMCC Baremetal Altera SoC-FPGA!\n");
		printf("count = %d\n",i);
	}
    end = clock();
    time = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("execution time = %lf s\n", time);
    return 0;
}
*/
