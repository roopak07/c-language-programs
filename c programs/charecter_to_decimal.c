#include <stdio.h>
#define bit 31 // for 32 bit processor
int b[bit];
int main()
{
    printf("Hello, World!\n");
    int val;
    char ch;
    printf("\nenter a charecter:");
    scanf("%c",&ch);
    val = (int)ch;
    printf("\n charecter value:%d \n",val);
    for(int i=0;i <= bit;i++)
    {
        b[i]=val%2;
        val=val/2;
    }
	printf("\nbinary is:");
    for(int i= bit; i>=0; i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
