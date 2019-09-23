#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,count=0;
 clrscr();
 printf("enter n value:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   count++;
  }
 }
 if(count == 2)
 {
  printf("give number is prime number\n");
 }
 else
 {
 printf("given number is not a prime number\n");
 }
 getch();
}
