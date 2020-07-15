#include<stdio.h>
#include<math.h>
/*Clearing the bit */
void main()
{
 int val,bitc,bval; // val=10, bitc = 2,
 printf("Enter value:");
 scanf("%d",&val);
 printf("\nBinary value:%d",val);
 printf("\nEnter bit to clear:");
 scanf("%d",&bitc);
 bval=pow(2,bitc); // 2 power 2 = 4
 if((val&bval)==bval) // 0000 1010 & 0000 0100 = 0000 0000(0), bval = 4
 {
  val=(val^bval);
 }
 printf("\n%d",val);
}
