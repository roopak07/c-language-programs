#include<stdio.h>
#include<conio.h>
void main()
{
int n,feb(int),fact;
clrscr();
printf("enter n value:");
scanf("%d",&n);
fact = feb(n);
printf("factoroial of the number is:%d\n",fact);
getch();
}

int feb(int x)
{
int val;
 if(x==1)
  return 1;
 val=feb(x-1)*x;
 return val;
}