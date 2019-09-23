#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],temp,n;
clrscr();
printf("enter no:of emelemts:");
scanf("%d",&n);
printf("Enter values for array:");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(int j=0;j<n-1;j++)
 {
  if(a[j]<a[j+1])
  {
  temp=a[j+1];
  }
 }
 printf("highest number among the array is:%d\n",temp);
 getch();
}