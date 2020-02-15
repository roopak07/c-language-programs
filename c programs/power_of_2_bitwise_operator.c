#include <stdio.h>
#define bit sizeof(int)*8 // for 32 bit processor
int b[bit];
int main()
{
	int val,pow=0;
    printf("Finding weather given number is power of 2 or not \n");
	printf("Enter a value: \n");
	scanf("%d",&val);
    for(int i=1;i<=bit;i++)
	{
		if(val&1 == 1)
			pow++;
		val=val>>1;
	}
	if(pow==1)
		printf("Given numbber is the power of 2 \n");
	else
		printf("Given number is not the power of 2 \n");
    return 0;
}
