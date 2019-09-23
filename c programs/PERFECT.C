#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,sum=0,temp;
 clrscr();
 printf("enter n value:");
 scanf("%d",&n);
 temp=n;
 for(i=1; i<n; i++)
 {
  if(n%i==0)
  {
   sum=sum+i;
  }
 }
  if(sum==temp)
  {
  printf("given number is a perfect number\n");
  }
  else
  {
  printf("given number is not a perfect number\n");
  }
getch();
}