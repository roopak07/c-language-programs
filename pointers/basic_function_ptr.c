#include <stdio.h>

void fun(int a) {
  printf("Value of a is %d\n", a);
}

int main() {
  
      // & removed assigning
    void (*fun_ptr)(int) = fun;

      // * removed in calling
    fun_ptr(10);

    return 0;
}
