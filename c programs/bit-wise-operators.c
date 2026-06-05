#include<stdio.h>

void mul_div_pow_of_2();
void even_or_odd();
void set_clear_toggle();
void set_clear_toggle_with_mask();
void check_kth_bit_set_clear();
void check_power_of_2();
void toggle_even_odd_bits();
void deciaml_to_binary();
void swap_the_values();
void unique_element_in_an_array();

int main()
{
    set_clear_toggle();
    even_or_odd();
    mul_div_pow_of_2();
    check_kth_bit_set_clear();
    check_power_of_2();
    toggle_even_odd_bits();
    deciaml_to_binary();
    swap_the_values();
    unique_element_in_an_array();
    return 0;
}

void unique_element_in_an_array()
{
    int a[]={1,1,2,2,3,4,4,5,5};
    int uniq=0;
    for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++)
        uniq = uniq^a[i];
    printf("Uniqueue element in an array is:%d \n", uniq);
}

void swap_the_values()
{
    int a=8, b=9;
    printf("Before swapping a=%d, b=%d \n", a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping a=%d, b=%d \n", a,b);
}
void deciaml_to_binary()
{
    int n=10;
    printf("Binary of %d is:0b ", n);
    for(int i=31; i>=0; i--)
    {
        printf("%d",(n>>i) & 1);
    }
    printf("\n");
}
void toggle_even_odd_bits()
{
    int n=0xFFFFFFFF;
    printf("Actual value:0x%X, even and odd bits toggled value:0x%X\n", n , (n^0x55555555));
}

void check_power_of_2()
{
    int n=7;
    if(!(n&(n-1)))
        printf("%d is power of 2\n", n);
    else
        printf("%d is not power of 2\n", n);
}

void check_kth_bit_set_clear()
{
    int n=7, k=3;
    if(n&(1<<k))
        printf("%d bit is set in %d\n", k, n);
    else
        printf("%d bit is clear in %d\n", k, n);
}
void mul_div_pow_of_2()
{
    int n=6;
    printf("%d multiplied by 2 is:%d\n", n, n<<1);
    printf("%d Division by 2 is:%d\n", n, n>>1);
    printf("2 Power of %d is:%d\n", n, 1<<n);
}

void even_or_odd()
{
    int n=8;
    if(n&1)
        printf("%d is odd\n", n);
    else
        printf("%d is even\n", n);
    
    n=7;
    if(n&1)
        printf("%d is odd\n", n);
    else
        printf("%d is even\n", n);
}
void set_clear_toggle()
{
    int pos=2, n=8;
    printf("value after setting %d bit in the value %d is:%d\n", pos,n, (n|(1<<pos)));
    n = (n|(1<<pos));
    printf("value after clearing %d bit in the value %d is:%d\n", pos,n, (n&~(1<<pos)));
    n = (n&~(1<<pos));
    printf("value after toggling %d bit in the value %d is:%d\n", pos,n, (n^(1<<pos)));
}
void set_clear_toggle_with_mask()
{
    int pos=2, n=8;
    printf("value after setting %d bit in the value %d is:%d\n", pos,n, (n|(1<<pos)));
    n = (n|(1<<pos));
    printf("value after clearing %d bit in the value %d is:%d\n", pos,n, (n&~(1<<pos)));
    n = (n&~(1<<pos));
    printf("value after toggling %d bit in the value %d is:%d\n", pos,n, (n^(1<<pos)));
}
