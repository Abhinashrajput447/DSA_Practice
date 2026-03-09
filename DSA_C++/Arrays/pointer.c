#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

    printf("a %d", a);
    printf("a : %p\n", &a);  //5
    printf("ptr : %p\n", ptr);  //5
    printf("*ptr %d\n", *ptr); //
    printf("**ptr2 %p\n", ptr2);
    return 0;
}