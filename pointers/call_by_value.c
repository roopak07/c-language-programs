#include<stdio.h>
#include<conio.h>
void inc(int);
void main()
{
	int a=10;
	printf("In main function-->address of a=%x, a=%d\n", &a, a);
	inc(a);
	printf("In main function-->address of a=%x, a=%d\n", &a, a);
}

void inc(int a)
{
	printf("In Inc function-->address of a=%x, a=%d\n", &a, a);
	a=a+5;
	printf("In Inc function-->address of a=%x, a=%d\n", &a, a);
}