#include <stdio.h>

void test_array(){
     int i,a[]={1,2,3,4,5};
    int *p=a;
    for(i=0;i<5;i++){
        printf("%d\t %d\n",*(p+i),p+i);
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
    // sum_Array_Elements(a,n);
    // L_s(a,n);
    // mov_zero(a,n);
}


