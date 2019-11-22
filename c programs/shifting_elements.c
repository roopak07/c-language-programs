#include<stdio.h>
void left_shift();
void right_shift();
void main()
{
	left_shift();
	right_shift();
}

void left_shift()
{
	printf("\nLeft shift operation \n");
	int i,j,n,p;
	char temp,a[50];
	printf("enter no:of elemnts:\n");
	scanf("%d",&n);
	printf("\nEnter charecters in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]); // give space before %c it will consume "enter" when we hit enter button after every charcter 
		printf("a=%d,n=%d,i=%d \n ",a[i],n,i);
	}
	printf("Entered elements are:");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	printf("\nEnter no:of ellemnets to shift:");
	scanf("%d",&p);
	for(int k=1;k<=p;k++)
	{
		temp = a[0];
		for(i=0;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[i]=temp;
		printf("\nshifted array elements are:");
		for(i=0;i<n;i++)
		{
		printf("%c ",a[i]);
		}
	}
}

void right_shift()
{
	printf("\nRight shift operation \n");
	int i,j,n,p;
	char temp,a[50];
	printf("enter no:of elemnts:\n");
	scanf("%d",&n);
	printf("\nEnter charecters in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]); // give space before %c it will consume "enter" when we hit enter button after every charcter 
		printf("a=%d,n=%d,i=%d \n ",a[i],n,i);
	}
	printf("Entered elements are:");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	printf("\nEnter no:of ellemnets to shift:");
	scanf("%d",&p);
	for(int k=1;k<=p;k++)
	{
		temp = a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[i]=temp;
		printf("\nshifted array elements are:");
		for(i=0;i<n;i++)
		{
		printf("%c ",a[i]);
		}
	}
}