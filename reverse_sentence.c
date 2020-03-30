#include <stdio.h>
char data[100]; // this is for storing reversed sentense 
char *c = data; // charecter pointer for storing charecter in data using c 
void reverse_val(char *start,char *end);
void reverse(char *p1,char *p2);
void main()
{
    char *s = "Hello world";
    char *temp=s;
    char *end=NULL;
    while(*temp != '\0') // repeat loop till end of the sentense
    {
        end = temp; //store temp value in end  
        temp++; // increamenting temp by 1 since temp is char pointer
    }
    printf("\n begining of code:%d  end of the code:%d \n",s,end);
    reverse_val(s,end); // send starting address and end address to the function
    puts(data);
}

void reverse_val(char *start,char *end) // this function is for detecting start address and end adress of each word
{
    char *temp = end;
    while(temp != start) // checking till end of the sentense 
    {
       if(*temp == ' ') // if  we detect space then enter loop
       {
           reverse(temp+1,end); // it will detect till space ,we need to send word first address and end address
           *(c++) = ' '; // after inserting space ,increamenting c value
           end = temp; //After completing each word, intializing end point for next word
       }
       temp--;
       printf("\n temp=%d end=%d",temp,end);
    }
    reverse(temp,end);
}
void reverse(char *p1,char *p2) // this function is for storing each word in data char array, using char pointer c 
{
    printf("\nstart point:%d end point:%d\n",p1,p2);
    while(p2 >= p1) // p2 is end adress of word and p1 is starting adress of a word
    {
        printf("c \t : %d",c);
        *c = *p1;// storing chacter present in p1 in data using pointer 'c' 
        c++;// increamenting c by 1 since chacter pointer size is one byte
        p1++; // increamenting p1 by 1 since size of chacter is one byte
    }
    puts(data);
    printf("\nend c : %d \n",c);
}
