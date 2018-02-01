/*
 * Copyright Altera 2013,2014
 * All Rights Reserved
 * File: hello.c
 *
 */

#include <stdio.h>

/* enable semihosting with gcc by defining an __auto_semihosting symbol */
int __auto_semihosting;

int main(int argc, char** argv) {
    printf("Hello from Semi-Hosted GNU Baremetal Altera SoC-FPGA!\n");
    printf("Wishing you again good luck!\n");
   return 0;
}
