#include<stdio.h>
#include<conio.h>
void main()
{
 char *p;
 int i;
 char c[6]="hello\0";
 clrscr();
 p=c;
 printf("address: %u\n",p);
 /*method 1*/
 for(i=0;i<=5;i++)
 {
  printf("%c",p[i]);
 }
  /*method 2*/
 for(i=0;i<=5;i++)
 {
  printf("%c",i[p]);
 }
  /*method 3*/
 for(i=0;i<=5;i++)
 {
  printf("%c",*(p+i));
 }
  /*method 4*/
 for(i=0;i<=5;i++)
 {
  printf("%c",*(i+p));
 }
  /*method 5*/
 for(i=0;i<=5;i++)
 {
  printf("%c",*p);
  ++p;
 }
 getch();
}