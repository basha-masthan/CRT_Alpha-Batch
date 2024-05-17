#include <stdio.h>

int prm(int n){
    int i;
    if(i<=1){
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

void prime_ind(int *p,int n){
    int i,k;
    for(i=0;i<n;i++){
       if(!prm(i) || i==1 ){
            // printf("%d is Not Prime index\n",i);
            printf("Not Prime index[%d] \t value [%d]\n",i,*(p+i));
            // printf("\n");
       }
       else{
            printf("Prime index[%d] \t value [%d]\n",i,*(p+i));
       }
    }
}

void main(){
    int n,i;          
    printf("Testing with function parameter passing");
    printf("Enter size of array:"); scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);   scanf("%d",&a[i]);
    }
    prime_ind(a,n);
}