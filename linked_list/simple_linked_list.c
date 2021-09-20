/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdint.h>
#define ADD 1
#define DELET 2
#define LENGTH 3
#define DISPLAY 4
#define EXIT 5

void add();
void delet();
void length();
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *root=NULL;



int main()
{
    int ch;
    while(1)
    {
        printf("\n**********************************************************************\n");
        printf("Chose an option\n");
        printf("1.Add \n2.Delet \n3.Length \n4.Display \n5.Exit");
        printf("\nEnter your choise: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case ADD:
                    add();
                    break;
            case DELET:
                    delet();
                    break;
            case LENGTH:
                    length();
                    break;
            case DISPLAY:
                    display();
                    break;
            default: return 0;
        }
    }
    return 0;
}

void add()
{
    int n;
    printf("add function\n");
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&n);
    temp->data = n;
    temp->link = NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p = root;
        while(p->link!=NULL)
            p= p->link;
        p->link=temp;
    }
    
    
}

void delet()
{
    printf("delet function\n");
    struct node *p=root, *q=root;
    
    while(p->link!=NULL)
    {
        q=p;
        p=p->link;
    }
    q->link=NULL;
    free(p);
    
}

void length()
{
    printf("length function\n");
    struct node *p=root;
    uint8_t len=0;
    while(p!=0)
    {
        len++;
        p=p->link;
    }
    printf("\n No:of nodes in the linked list = %d \n", len);
}

void display()
{
    printf("display function\n");
    struct node *p=root;
    while(p!=NULL)
    {
        printf("-> %d | %u",p->data,p->link);
        p=p->link;
    }
}
