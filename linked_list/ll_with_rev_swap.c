#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *root=NULL;

int insert();
int delete();
int length();
int display();
int reverse();
int swap_adjacent();

int main()
{
    uint32_t ch=0;
    while(1)
    {
        printf("Select from below:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Length\n");
        printf("4.Display\n");
        printf("5.Reverse\n");
        printf("6.Swap adjecent nodes\n");
        printf("9.exit\n");
        printf("Enter your choise:\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: length();
                    break;
            case 4: display();
                    break;
            case 5: reverse();
                    break;
            case 6: swap_adjacent();
                    break;
            default: 
                    return 0;
        }
    }
    return 0;
}

int swap_adjacent()
{
    struct node *prev=root, *current=root, *next=root;
    int len=0, swap_ch=0;
    len = length();
    printf("Enter the node to swap:");
    scanf("%d", &swap_ch);
    if(len<2)
        printf("There are no nodes to swap\n");
    else if(swap_ch > len)
        printf("Entered choise is outoff range\n");
    else 
    {
        for(int i=1; i<(swap_ch-1); i++)
            prev=prev->link;
        current         = prev->link;
        next            = current->link;
        current->link   = next->link;
        next->link      = current;
        prev->link      = next;
    }   
    return 0;
}

int insert()
{
    struct node *temp=NULL;
    uint32_t data=0;
    temp=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter data to insert in the node:");
    scanf("%d", &data);
    temp->data = data;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p=root;
        while(p->link!=NULL)
            p=p->link;
        p->link = temp;
    }
    
    return 0;
}

int delete()
{
    struct node *temp=root, *current=root;
    int len=0, del_ch=0;
    len = length();
    printf("Enter the node to delete:");
    scanf("%d", &del_ch);
    if(len == 0)
        printf("There are no nodes to delete\n");
    else if(del_ch > len)
        printf("Entered choise is outoff range\n");
    else 
    {
        for(int i=0; i<(del_ch-1); i++)
            current=current->link;
        temp = current->link; // point to next node , so temp will have next node address
        // Copy the next node data into present node and free the temp node
        current->data=temp->data;
        current->link = temp->link;
        // Delet the next node as we copied the next node into current node
        temp->link = NULL;
        free(temp);
    }
    return 0;
}

int length()
{
    uint32_t len=0;
    struct node *p=root;
    while(p!=NULL)
    {
        len++;
        p=p->link;
    }
    printf("No:of nodes:%d\n", len);
    return len;
}

int display()
{
    struct node *p=root;
    while(p!=NULL)
    {
        printf("%d | 0x%x   ", p->data, p->link);
        p=p->link;
    }
    printf("\n");
    return 0;
}

int reverse()
{
    int len=0;
    struct node *current=root, *next=root, *prev=NULL;
    len=length();
    if(len < 2)
        printf("There are no nodes to delete\n");
    while(current!=NULL)
    {
        next=current->link;
        current->link = prev;
        prev=current;
        current=next;
    }
    root=prev;
}
