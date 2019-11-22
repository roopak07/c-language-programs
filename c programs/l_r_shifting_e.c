#include<stdio.h>
#include<stdlib.h>
void right(char*,int,int);
void left(char*,int,int);
void print(char*,int);

void main()
{
	int c;
	while(1)
	{
		printf("\n*****************************\n");
		/*  */
		int n,i,p;
		char a[50];
		printf("Enter no:of array chacters you want to enter:\n");
		scanf("%d",&n);
		printf("Enter array charecters:\n");
		for(i=0;i<n;i++)
		{
			scanf(" %c",&a[i]);
		}
		printf("Entered charcters are:\n");
		print(a,n);
		printf("Enter no:of shift operations:\n");
		scanf("%d",&p);
		/*  */
		printf("1.Right shift \n");
		printf("2.Left shift\n");
		printf("3.Exit \n");
		printf("Enter your choise:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: right(a,n,p);
					print(a,n);
					break;
			case 2: left(a,n,p);
					print(a,n);
					break;
			case 3: exit(1);
			default:printf("Enter a valid choise\n");
		}
	}
}
void print(char *ad,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("%c ",ad[i]);
	}
	printf("\n");
}

void left(char *adl,int sl,int lp)
{
	int temp,k,i;
	for(k=1;k<=lp;k++)
	{
		temp = adl[0];
		for(i=0;i<sl-1;i++)
		{
			adl[i]=adl[i+1];
		}
		adl[i]=temp;
	}
}

void right(char *adr,int sr,int rp)
{
	int temp,k,i;
	for(k=1;k<=rp;k++)
	{
		temp=adr[sr-1];
		for(i=sr-1;0<i;i--)
		{
			adr[i]=adr[i-1];
		}
		adr[i]=temp;
	}
}