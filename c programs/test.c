#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=5,c=5,d=5,e=5,f,g;
printf("++a + a++ + a-- = %d\n",++a + a++ + --a);
printf("++b,b++,--b = %d %d %d \n",++b,b++,--b);
printf("c+++c+++c = %d \n",c+++c+++c);
f= ++d + d++ + d--;
printf("f(++d + d++ + d--)= %d\n",f);
printf("d=%d\n",d);
g= e+++e+++e ;
printf("g(e+++++e)= %d\n",g);
getch();
}