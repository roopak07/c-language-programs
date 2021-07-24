#include<stdio.h>
#include "mymath.h" // user defined header file, "" - serach in the local directory ,  <> - dont use this for user defined function
#include<conio.h> // for getch()
#include <stdint.h>  // for uint32_t 

void main()
{
	printf("add:%d\n", sum(2,3));
	printf("sub:%d\n", sub(3,2));
	printf("mul:%d\n", mul(2,3));
	getch();
}