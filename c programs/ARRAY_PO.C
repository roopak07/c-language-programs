#include<stdio.h>
#include<conio.h>
void main()
{
 int ans,n,i[]={1,5,8,4,7,9},mxa(int*,int),s,j;
 clrscr();
 n=sizeof(i);
 printf("array size:%d \n",n);
 s=n/sizeof(int);
 printf("No:of Elements in array is:%d\n",s);
  printf("Array values in mainn function:\n");
 for(j=0;j<s;j++)
 printf("%d\t",i[j]);
 printf("\n");
 ans=mxa(i,s);
 printf("max value form the array is:%d \n",ans);
 getch();

}
int mxa(int *add,int n)
{
 int i,temp=0;
 printf("Array values in mxa function is:\n");
 for(i=0; i<n; i++)
 {
  printf("%d\t",add[i]);
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
  if(add[i]>temp)
  {
   temp=add[i];
  }
 }
 return temp;
}