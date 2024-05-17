#include <stdio.h>

void main()
{
    int a=10;float b=3.14;
    void *ptr;
    ptr = &a;
    printf("Value is :%d\n",*(int*)ptr);

    ptr = &b;
    printf("Value is :%.2f\n",*(float*)ptr);
}