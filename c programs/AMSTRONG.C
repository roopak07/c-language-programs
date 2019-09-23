#include<stdio.h>
#include<conio.h>
void main()
{
int temp,sum=0,rem,n;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
temp=n;
 while(n)
 {
  rem=n%10;
  sum=rem*rem*rem+sum;
  n=n/10;
 }
 printf("sum: %d\n",sum);
 if(sum == temp)
  printf("given number is Amstrong number\n");
 else
 printf("given number is not an amstrong number\n");
 getch();
}