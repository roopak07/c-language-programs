#include<stdio.h>
#include<conio.h>
void main()
{
 int a1=5,a2=5,a3=5,a4=5,ar;
 clrscr();
 printf("++a1 , a1++ , ++a1 = %d\t %d\t %d\t \n",++a1 , a1++ , ++a1);
 printf("++a2 + a2++ + ++a2 = %d \n",++a2 + a2++ + ++a2);
 printf("a3+++a3 = %d \n",a3+++a3);
 ar=a4+++a4;
 printf("%d \n",ar);
 getch();

}
