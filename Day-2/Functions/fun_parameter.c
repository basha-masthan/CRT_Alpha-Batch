#include <stdio.h>

void test(int);

void main(){
    int n;
    printf("Enter a number :");     scanf("%d",&n);
    test(n);        //n = actual parameter
}

void test(int a){       // a = Formal Parameters
    int f=1,i;
    for(i=1;i<=a;i++){
        f=f*i;
    }
    printf("Fact of %d is: %d",a,f);
}