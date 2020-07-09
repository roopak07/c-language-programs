#include <stdio.h>
#define bit sizeof(int)*8 // for 32 bit processor
int b[bit];
int main()
{
	int val;
    printf("Converting decimal into binary using bitwise operator\n");
	printf("\nEnter a value: \n");
	scanf("%d",&val);
	printf("\nbit=%d",bit);
    for(int i=bit-1;i>=0;i--)
	{
		b[i] = val&1; // suppose val = 4, 0000 0100 & 0000 0001
		val=val>>1;
	}
	printf("\n Binary number is:");
	for(int i=0;i<bit;i++)
	{
		printf("%d",b[i]);
	}
    return 0;
}
