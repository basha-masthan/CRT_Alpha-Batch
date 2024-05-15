#include <stdio.h>

void fact(int);

void main(){
    int i,n,a,sum;
    float b;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1;n>0;i++){
        a=n%10;
        fact(a);
        n=n/10;
    }
}

void fact(a){
    printf("%d of strong",a);
}