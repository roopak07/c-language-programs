#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define size 5
void enque();
void deque();
void disp();

typedef struct circular_queue
{
 int rdi,wri,noc;
 int buf[size]; // each array element is 1 byte integer block
}cirque;
cirque cq;

void main()
{
 int ch;
 cq.rdi = -1;
 cq.wri = -1;
 cq.noc=0;
 while(1)
 {
 printf("\n**Select you choise**\n1.enque\n2.dequeue\n3.display\n4.Length of the queue\n5.status of queue\n6.exit\nEnter your choise:\n");
 scanf("%d",&ch);
  switch(ch)
  {
    case 1: cq.noc==size?printf("\nQueue is full"):enque(); // no:of char is full i.e no:char =40 then que is full
            break;
    case 2:cq.noc==0?printf("\nQueue is Empty"):deque();
            break;
    case 3:cq.noc==0?printf("\nQueue is Empty"):disp();
            break;
    case 4:printf("\nLength of the queue is:%d",cq.noc);
            break;
    case 5:printf("\nwri=%d\trdi=%d\tnoc=%d\n",cq.wri,cq.rdi,cq.noc);
            break;
    case 6:exit(0);
    default:printf("\nEntered choise is invalid\n");
  }
 }
}

void enque()
{
 int ele; // only 1 byte integer
 printf("\nEnter element:");
 scanf("%d",&ele);
 if(cq.noc==0) // when ever the elements are 0 then this block will exicute
 {
     cq.rdi=0;
     cq.wri=0;
     cq.buf[cq.wri]=ele; 
 }
 else if(cq.wri==(size-1)) // suppose rdi is 2 and wri =4 , then this block will exicute and make wri=0 so that we can use 0,1 spaces since rdi=2
 {
  cq.wri=0;
  cq.buf[cq.wri]=ele;
 }
 else
 {
  cq.wri++;
  cq.buf[cq.wri]=ele;
 }
 cq.noc++;// insted of keeping this line in all the condition we are keeping at the end of the condiotions
}

void deque()
{
    if(cq.rdi==size) // once rdi reaches to 5 it should become 0, till no:4 i.e 0,1,2,3,4, this condition will be false
        cq.rdi=0;
 printf("\n%d is deleted from the queue",cq.buf[cq.rdi]);
 cq.rdi++;
 cq.noc--;
 if(cq.noc==0) // if queue is empty make rdi=-1 and wri=-1 , since its the initial state when queue is empty
 {
    cq.rdi = -1;
    cq.wri = -1;
 }
}

void disp()
{
 if(cq.rdi>cq.wri) // when wri crosses size i.e 5 and starts from 0 the this condition is for that case ,suppose ex: wri=2 and rdi 3
 {
  for(int i=cq.rdi;i<size;i++) // let rdi = 3 and wri=4 ,this for rdi from 3,4
    printf("%d\t",cq.buf[i]);
 for(int i=0;i<=cq.wri;i++) // wri 0,1,2
    printf("%d\t",cq.buf[i]);
 }
 else // for normal printing i.e suppose rdi =0 and wri = 4 
 {
    for(int i=cq.rdi;i<=cq.wri;i++)
    printf("%d\t",cq.buf[i]);
 }
}
