#include<stdio.h>
#include<conio.h>

void main()
{
	int a[]={1,2,3,4,5};
	printf("address of a=%x value of a=%x\n", &a, a);
	for(int i=0;i<5;i++)
	{
		printf("&a[i]=%x, a[i]=%d\t",&a[i], a[i]);
		printf("a+i=%x, *(a+i)=%d\n",a+i, *(a+i));
	}
}