#include<stdio.h>
#include<conio.h>
#define PROGRAM1 1
#define PROGRAM2 0


#if PROGRAM1
int SumOfElements(int *);
SumOfElements(int a[]) // int a[] or int *a
{
	int sum=0,size_of_array=0;
	printf("[In SumOfElements function] sizeof(a)=%d, sizeof(a[0]) = %x\n", sizeof(a), sizeof(a[0])); 
	// As we dont pass entire array to this function , we just pass address of array to a , so sizeof a will be 4 bytes , its like pointer variable
	size_of_array = sizeof(a)/sizeof(a[0]);
	printf("[In SumOfElements function] size of array=%d\n", size_of_array); 
	for(int i=0; i<size_of_array; i++)
	{
		sum+=*(a+i);
	}
	return sum;
}
void main()
{
	int a[]={1,2,3,4,5}, total;
	printf("Address of a=%x value of a=%x\n", &a, a);
	printf("[In main function] sizeof(a)=%d, sizeof(a[0]) = %x\n", sizeof(a), sizeof(a[0]));
	printf("[In main function] size of array=%d\n", sizeof(a)/sizeof(a[0])); 
	total = SumOfElements(a);
	printf("Sum of Elements = %d\n", total);
}
#endif

#if PROGRAM2
int SumOfElements(int *, int);
SumOfElements(int a[], int size) // int a[] or int *a
{
	int sum=0, size_of_array;
	printf("[In SumOfElements function] sizeof(a)=%d, sizeof(a[0]) = %x\n", sizeof(a), sizeof(a[0])); 
	// As we dont pass entire array to this function , we just pass address of array to a , so sizeof a will be 4 bytes , its like pointer variable
	size_of_array = size/sizeof(a);
	printf("[In SumOfElements function] size of array=%d\n", size_of_array); 
	for(int i=0; i<size_of_array; i++)
	{
		sum+=*(a+i);
	}
	return sum;
}
void main()
{
	int a[]={1,2,3,4,5}, total;
	printf("Address of a=%x value of a=%x\n", &a, a);
	printf("[In main function] sizeof(a)=%d, sizeof(a[0]) = %x\n", sizeof(a), sizeof(a[0]));
	printf("[In main function] size of array=%d\n", sizeof(a)/sizeof(a[0])); 
	total = SumOfElements(a, sizeof(a));
	printf("Sum of Elements = %d\n", total);
}
#endif