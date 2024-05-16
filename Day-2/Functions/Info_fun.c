#include <stdio.h>

void fact();
void perfect();
void sum_num();

void main(){
    // fact();
    // perfect();
    sum_num();
}

void fact(){
    int i,n,f=1;
    printf("Enter a number:");  scanf("%d",&n);

    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("fact : %d",f);
}

void perfect(){
    int n,i,sum=0;
    printf("Enter a number :");     scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(n==sum)
        printf("%d is a Perfect number",n);
    else{
        printf("%d is a Not Perfect number\n",n);
        main();
    }
}


void sum_num(){
    int a,n,sum=0;
    printf("Enter a number :");     scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of Integer:  %d\n",sum);
}   