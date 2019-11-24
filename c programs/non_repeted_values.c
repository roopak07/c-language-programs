/* Unique values in the given range*/
#include<stdio.h>
void main()
{
	int a[50],n,c,count;
	printf("Enter n value: \n");
	scanf("%d",&n);
	printf("Enter values in array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("non repeted values are:\n");
	for(int p=0;p<n;p++)
	{
		c=a[p];
		count = 0;
		for(int q=0;q<n;q++)
		{
			if(a[q] == c)
				count++;
		}
		if(count == 1)
			printf("%d  ",c);
	}
}