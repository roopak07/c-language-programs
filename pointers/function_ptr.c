// Online C compiler to run C program online
#include <stdio.h>

void abc(int b)
{
    printf("b=%d\n",b);
}
int main() {
    //Below is the basic pointer
    int a=0,*ptr;
    
    //Create function pointer variable *fun_ptr
    // function_return_type (*function_ptr_name)(function_input parameter_type) = &function_name
    void (*fun_ptr)(int)=&abc;
    (*fun_ptr)(10);
    
    ptr = &a;
    *ptr=20;
    printf("a=%d, *p=%d", a, *ptr);
    return 0;
}
