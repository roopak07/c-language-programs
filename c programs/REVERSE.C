#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
clrscr();
printf("enter n value:");
scanf("%d",&n);
while(n)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("\n reverse of the number is: %d",sum);
getch();
}
