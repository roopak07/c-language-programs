#include<stdio.h>
#include<stdlib.h>
void add();
void disp();
int length();
void addf();
void beg();
void delet();
void swap();
void sort();
struct node
{
	int data;
	struct node *link;
};
struct node *root = NULL;
void rev(struct node *);
void main()
{
	int ch,l;
	while(1)
	{
		printf("\n******************************************\n");
		printf("1.Add a new node \n");
		printf("2.display \n");
		printf("3.length \n");
		printf("4.add after \n");
		printf("5.add at the begining \n");
		printf("6.delet \n");
		printf("7.Swapping \n");
		printf("8.reverse \n");
		printf("9.sort \n");
		printf("10.exit \n");
		printf("Enter your choise: ");
		scanf("%d",&ch);
		printf("\n");
		switch(ch)
		{
			case 1: add();
					break;
			case 2: disp();
					break;
			case 3: l=length();
					printf("length of the node: %d \n",l);
					break;
			case 4: addf();
					break;
			case 5: beg();
					break;
			case 6: delet();
					break;
			case 7: swap();
					break;
			case 8: rev(root);
					break;
			case 9: sort();
					break;
			case 10: exit(1);
					break;
			default: printf("Enter a valid choise \n");
			
		}
	}
}
/*add */
void add()
{
	struct node *temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter data into the node:");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(root==NULL)
		root=temp;
	else
	{
			struct node *pos=root;
			while(pos->link != NULL)
			{
				pos = pos->link;
			}
			pos->link = temp;
	}
}
/* display */
void disp()
{
	printf("%d ",root);
	for(struct node *pos=root; pos!=NULL;pos=pos->link)
	{
		printf("--> %d | %d ",pos->data,pos->link);
	}
}
/* length */
int length()
{
	int count=0;
	for(struct node *pos = root;pos!=NULL;pos=pos->link)
	{
		count++;
	}
	return count;
}
void addf()
{
	int p,l=length(),count = 1;
	printf("Enter postion to add:");
	scanf("%d",&p);
	if(p>l)
		printf("Entered position is out of Range");
	else if(p == l)
		add();
	else
	{
		struct node *temp,*pos=root;
		temp= (struct node*)malloc(sizeof(struct node));
		printf("Enter data into the node:");
		scanf("%d",&temp->data);
		temp->link = NULL;
		while(count < p)
		{
			pos = pos->link;
			count++;
		}
		temp->link = pos->link;
		pos->link = temp;
	}
}
void beg()
{
	struct node *temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter data into the node:");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(root==NULL)
		root=temp;
	else
	{
			temp->link = root;
			root = temp;
	}
}
void delet()
{
	int p,l=length(),count = 1;
	printf("Enter postion to delet:");
	scanf("%d",&p);
	if(p>l)
		printf("Entered position is out of Range");
	else
	{
		struct node *pos=root,*next;
		while(count < p-1)
		{
			pos = pos->link;
			count++;
		}
		next=pos->link;
		pos->link=next->link;
		next->link = NULL;
		free(next);
	}
}
void swap()
{
	int p,l=length(),count = 1;
	printf("Enter postion to swap:");
	scanf("%d",&p);
	if(p>=l)
		printf("Entered position is out of Range");
	else if(p == 1)
	{
		struct node *pos=root,*next;
		next = pos-> link;
		pos->link =next->link;
		next->link = pos;
		root = next;
	}
	else
	{
		struct node *prv=root,*next,*cur;
		while(count < p-1)
		{
			prv = prv->link;
			count++;
		}
		cur=prv->link;
		next=cur->link;
		cur->link = next->link;
		next->link = cur;
		prv->link= next;
	}
}

void rev(struct node *pos) // using recursive function
{
	if(pos->link == NULL)
	{
		root = pos;
		return; // it will return nothing , it will just return to previous funtion and starts excuting after rev(pos->link);
	}
	rev(pos->link); // recursion
	struct node *q = pos->link;
	q->link = pos;
	pos->link = NULL;
}

void sort()
{
	int temp;
	struct node *pass,*ser;
	for(pass = root;pass->link != NULL;pass = pass->link)
	{
		for(ser = root;ser->link!= NULL;ser = ser->link)
		{
			if(ser->link->data < ser->data)
			{
				temp = ser->link->data;
				ser->link->data = ser->data;
				ser->data = temp;
			}
		}
	}
}