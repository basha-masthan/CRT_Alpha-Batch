
#include <stdio.h>
int fact(int *ptr);

void main(){
    int n;
    printf("Entra a number:");  scanf("%d",&n);
    printf("Fact of number is:%d\n",fact(&n));
}


int fact(int *ptr){
    int a=*ptr;
    printf("%d",a);
    int f=1,i;
    for(i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}