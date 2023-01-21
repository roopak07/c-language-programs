#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("--> Address of a:%x\n--> Value in a:%d\n--> Size of a:%d\n", &a, a, sizeof(a));
	printf("--> Address of ptr:%x\n--> Value in ptr:%d\n--> *ptr:%d\n--> Size of ptr:%d\n", &ptr, ptr, *ptr, sizeof(ptr));
	*ptr=20;
	printf("--> Address of a:%x\n--> Value in a:%d\n--> Size of a:%d\n", &a, a, sizeof(a));
	printf("--> Address of ptr:%x\n--> Value in ptr:%d\n--> *ptr:%d\n--> Size of ptr:%d\n", &ptr, ptr, *ptr, sizeof(ptr));
}