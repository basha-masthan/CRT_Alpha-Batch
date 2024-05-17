#include <stdio.h>

int rev(int *ptr);
int sum(int *ptr);

void main(){
    int n;
    printf("Entra a number:");  scanf("%d",&n);
    int x=n;
    printf("Reverse of number is:%d\n",rev(&n));
    printf("Sum of number is:%d\n",sum(&x));

}

int rev(int *ptr){
    int sum=0,k;
    while(*ptr>0){
        k=*ptr%10;
        sum=sum*10+k;
        *ptr=*ptr/10;
    }
    return sum;
}

int sum(int *ptr){
    int s=0,k;
    while(*ptr>0){
        k=*ptr%10;
        s=s+k;
        *ptr=*ptr/10;
    }
    return s;
}
