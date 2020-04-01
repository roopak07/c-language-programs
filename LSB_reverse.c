#include <stdio.h>
#include<math.h>
unsigned int data;
int rev[32],lsbrev[16];
unsigned int sum;
void main()
{
    printf("Enter any value: \n");
    scanf("%u",&data);
    printf("\n%d\n",sizeof(sum));
    for(int i = 0; i<=31 ;i++)
    {
        rev[i] = data & 1;
        data=data>>1;
        lsbrev[i] = rev[i];
    }
    printf("Actual bits: \n");
    for(int i = 31; i>=0 ;i--)
    {
        printf("%d",rev[i]);
    }
    for(int i = 0; i<32 ;i++)
    {
        if(15>=i)
            rev[i]=lsbrev[15-i];
    }
    printf("\nlsb Reversed bits\n");
    for(int i = 31; i>=0 ;i--)
    {
        printf("%d",rev[i]);
    }
    for(int i = 0; i< 32 ;i++)
    {
        sum = rev[i]*pow(2,i)+sum;
    }
    printf("\ndecimal value of LSB reversed bits is:%u \n",sum);
}
