#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ch[] = "cooding";
	printf("%s\n", ch);
	printf("sizeof string = %d , length of the string = %d\n", sizeof(ch), strlen(ch));
	printf("&ch = %x, ch=%d\n", &ch, ch);
	for(int i=0; i <= sizeof(ch)-1; i++)
		printf("&(ch+i)=%x, *(ch+i)=%c\n", (ch+i), *(ch+i));
}