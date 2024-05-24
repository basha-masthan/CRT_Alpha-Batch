#include <stdio.h>

int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

int sum_num(int n){
    if(n==0)
        return 0;
    else
        return n+sum_num(n-1);
}

void main(){
    int val;
    printf("Entar a value:");
    scanf("%d",&val);
    printf(" Factorial of %d --> %d\n",val,fact(val));
    printf("Sum_Numbers 0f %d --> %d",val,sum_num(val));
}