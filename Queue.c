#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max_size 10
int front = -1,rear = -1,ele,op,queue[max_size];
void insertion();
void delet();
void main()
{
while(1)
{		
 printf("\n***************************************\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nSelect an operation\n");
 scanf("%d",&op);
 switch(op)
 {
  case 1:/*Insertion*/
		if(rear == max_size-1)
			printf("Queue is full\n"); 
		else
		{
		printf("Enter element:\n");
		scanf("%d",&ele);
		if(front == -1)
			front = 0;
 
		rear++;
		queue[rear] = ele;
		}
		printf("\nfront:%d , rear:%d \n",front,rear);
		break;
 case 2:/*Deletion*/
		if(front == rear == -1 || front >rear)
			printf("Queue is empty\n");
		else
		{
		printf("%d is deleted \n",queue[front]);
		front++;
		}
		printf("\nfront:%d , rear:%d \n",front,rear);
		break;
 case 3:/*Display*/
		if(front == rear == -1 || front > rear)
			printf("Queue is empty\n");
		else
		{
		for(int i = front;i<=rear;i++)
			printf("%d ",queue[i]);
		}
		printf("\nfront:%d , rear:%d \n",front,rear);
		break;
 case 4:/*Exit*/
		exit(1);
	    break;
default : printf("\nInvalid selection \n");
 }
}
}
