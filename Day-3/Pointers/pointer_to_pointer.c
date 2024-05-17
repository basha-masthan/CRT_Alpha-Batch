#include<stdio.h>

void main()
{
    int num=10;
    int *p1 = &num;
    int **p2=&p1;
    printf("Value of num : %d",**p2);
}