#include<stdio.h>
int main()
{
    int a = 20;
    int *ptr = &a;

    printf("pointer of a %d\n\n", *&a);
    printf("pointer of a %d\n\n", *(&a));
    printf("pointer of a %d\n\n", *ptr);
    
    return 0;

}