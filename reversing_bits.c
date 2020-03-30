#include <stdio.h>
#include<math.h>
int data;
int rev[32];
int sum;
void main()
{
    printf("Enter any value: \n");
    scanf("%d",&data);
    printf("\n %d",sizeof(sum));
    for(int i = 31; i>0 ;i--)
    {
        rev[i] = data & 1;
        data=data>>1;
    }
    for(int i = 0; i<32 ;i++)
    {
        printf("%d",rev[i]);
    }
    for(int i = 0; i< 32 ;i++)
    {
        sum = rev[i]*pow(2,i)+sum;
    }
    printf("\n%d \n",sum);
}
