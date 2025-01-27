// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *next;
};

struct node *root=NULL;

int main() {
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    root=temp;
    root->a = 10;
    root->next = NULL;
    printf("root->a=%d root->next=%x\n", root->a,root->next);
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->a = 20;
    temp->next = NULL;
    root->next=temp;
    
    printf("root->next->a=%d root->next->next=%x\n", root->next->a,root->next->next);
    
    return 0;
}
