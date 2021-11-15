#include <stdio.h>
#include<string.h>
char str[100]; 
int start=0, end=0;
int main()
{
    
    printf("Enter string data:");
    scanf("%s",str);
    printf("string data:%s\n",str);
    end=strlen(str);
    printf("length of the string:%d\n",end);
    while(start<end-1)
    {
        str[start] = str[start]^str[end-1];
        str[end-1] = str[start]^str[end-1];
        str[start] = str[start]^str[end-1];
        start++;
        end--;
    }
    printf("string data after rev:%s\n",str);
    return 0;
}
