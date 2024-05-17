#include <stdio.h>
#include <stdlib.h>

void main(){
    int *p=(int *)malloc(sizeof(int));
    *p = 15;
    free(p);
    printf("%d",*p);
}