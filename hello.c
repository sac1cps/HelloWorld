#include <stdio.h>

int main(void) {
    printf("Hello, world!\n\n");
    int a = 1;
    int b = 2;
    if (b>a)
    {
        printf("b is greater than a");
    }
    else
    {
        printf("a is greater than b");
    }
    int c = a + b;
    printf("\n\n%i\n",c);
    return 0;
}

