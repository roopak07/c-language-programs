#include <stdio.h>
#include<math.h>
//Demo for removing commit
unsigned int data;
int rev[32];
unsigned int sum;
void main()
{
    printf("Enter any value: \n");
    scanf("%u",&data);
    printf("\n%d\n",sizeof(sum));
    for(int i = 31; i>=0 ;i--)
    {
        rev[i] = data & 1;
        data=data>>1;
        printf("%d",rev[i]);
    }
    printf("\n");
    for(int i = 0; i<32 ;i++)
    {
        printf("%d",rev[i]);
    }
    for(int i = 0; i< 32 ;i++)
    {
        sum = rev[i]*pow(2,i)+sum;
    }
    printf("\n%u \n",sum);
}
