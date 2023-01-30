#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 25;
	int *ptr = &a;
	printf("address of a=%x, a=%d\n", &a, a);
	printf("address of ptr=%x, ptr=%x, *ptr = %d\n", &ptr, ptr, *ptr);
	printf("address of ptr+1=%x, ptr+1=%x, *(ptr+1) = %d\n", &ptr+1, ptr+1, *(ptr+1));
}