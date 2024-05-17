#include <stdio.h>

void main(){
    int a=5,b=10;
    int *p1,*p2;
    p1=&a;p2=&b;
    printf("a\t=%d\n",p1);
    printf("a++\t=%d\n",++p1);
    printf("a+4\t=%d\n",p1+4);
    printf("a-5\t=%d\n",p1-4);
    printf("a--\t=%d\n",--p1);
    printf("a\t=%d\n",p1);
}