#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdint.h>
#include<stdlib.h>
#define queue_size 5
void insert();
void delet();
uint8_t length();
void display_data();
int8_t front=-1, rear=-1, len=0;
uint32_t linear_queue[queue_size];
void main()
{
	uint8_t ch=0;
	while(1)
	{
		printf("\n***************choose opption from below*******************\n");
		printf("1.Add an element\n2.Delet and element\n3.Length of linear queue\n4.Display elements of queue\n5.Display data present in queue\n6.Exit\n");
		printf("\nEnter your choise:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
					if(rear!=queue_size-1)
					{
						if(front > rear )
						{
								rear = -1;
								front = -1;
						}
						insert();
					}
					else
						printf("Queue is full\n");
					break;
			case 2:	delet();
					break;
			case 3:	len=length();
					printf("Length of the queue is:%d\n",len);
					break;
			case 4: printf("rear:%d\nfront:%d", rear, front);
					break;
			case 5: if(length()==0)
					printf("Queue is empty\n");
					else
					display_data();
					break;
			case 6:exit(0);
			default:printf("wrong option\n");
		}
	}
}
void insert()
{
	uint32_t ele=0;
	printf("Enetr data:\n");
	scanf("%d",&ele);
	if(front == -1)
		front=0;
	linear_queue[++rear]=ele;
}

void delet()
{
	if((front==-1 && rear == -1) || front > rear)
	{
		printf("Queue is empty\n");
		rear = -1;
		front = -1;
	}
	else
		front++;
}

uint8_t length()
{
	uint8_t len=0;
	if(front==rear == -1 && front > rear)
		return(len);
	else
	{		
		for(uint8_t i = front; i<=rear; i++)
			len++;
	}
	return(len);
}

void display_data()
{
	for(uint8_t i = front; i<=rear; i++)
	{
		printf("\t %d", linear_queue[i]);
	}
}