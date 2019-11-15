#include<stdio.h>
#define bit 15 // bit operator
void main()
{
	int n,b[bit],i,j;
	printf("enter number to convert into binary:");
	scanf("%d",&n);
	for(i=0; i<=bit; i++)
	{
		b[i] = n%2;
		n=n/2;
	}
	printf("\n");
	printf("%d binary is:",n);
	for(j=bit; j>=0; j--)
	{
		printf("%d",b[j]);
	}
}