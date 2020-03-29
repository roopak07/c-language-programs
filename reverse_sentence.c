#include <stdio.h>
char data[100];
char *c = data;
void reverse_val(char *start,char *end);
void reverse(char *p1,char *p2);
void main()
{
    char *s = "Hello world";
    char *temp=s;
    char *end=NULL;
    while(*temp != '\0')
    {
        end = temp;
        temp++;
    }
    printf("\n begining of code:%d  end of the code:%d \n",s,end);
    reverse_val(s,end);
    puts(data);
}

void reverse_val(char *start,char *end)
{
    char *temp = end;
    while(temp != start)
    {
       if(*temp == ' ')
       {
           reverse(temp+1,end);
           *c = 'a';
           end = temp;
           printf("test");
           printf("%c",*temp);
           printf("test");
           puts(data);
           printf("test");
       }
       temp--;
       printf("\n temp=%d end=%d",temp,end);
    }
    reverse(temp,end);
}
void reverse(char *p1,char *p2)
{
    printf("\nstart point:%d end point:%d\n",p1,p2);
    while(p2 >= p1)
    {
        printf("c \t : %d",c);
        *c = *p1;
        c++;
        p1++;
    }
    puts(data);
    printf("\nend c : %d \n",c);
}
