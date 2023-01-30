#include<stdio.h>
#include<conio.h>

void main()
{
	int a=0x08060402;
	int *ptr = &a;
	printf("address of a=%x, a=%d\n", &a, a);
	printf("address of ptr=%x, ptr=%x, *ptr = %d\n", &ptr, ptr, *ptr);
	char *ch;
	ch = (char*)ptr;
	printf("address of ch=%x, ch=%x, *ch = %d\n", &ch, ch, *ch);
	printf("ch+1=%x, *(ch+1) = %d\n", ch+1, *(ch+1));
	printf("ch+2=%x, *(ch+2) = %d\n", ch+2, *(ch+2));
	printf("ch+3=%x, *(ch+3) = %d\n", ch+3, *(ch+3));
	
}