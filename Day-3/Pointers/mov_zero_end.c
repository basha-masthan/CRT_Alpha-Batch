#include <stdio.h>

void mov_zero(int *p,int n){
    int i,b[n],c=0;
    for(i=0;i<n;i++){
       if(*(p+i)!=0){
        b[c]=*(p+i);
        c++;
       }
    }
    while(c<n){
        b[c]=0;
        c++;
    }
    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }
}

void main(){
    int n,i;          
    // printf("Basic Testing array with pointer...");
    // test_array();
    printf("Testing with function parameter passing");
    printf("Enter size of array:"); scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);   scanf("%d",&a[i]);
    }
 
    mov_zero(a,n);
}


