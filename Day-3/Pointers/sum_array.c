#include <stdio.h>

void sum_Array_Elements(int *p,int n){
    int i,sum_ev=0,sum_od=0;
    for(i=0;i<n;i++){
        if(i%2==0)
            sum_ev=sum_ev+*(p+i);
        else
            sum_od=sum_od+*(p+i);
    }
    printf("Sum of total Elements in Array:%d\n",sum_ev+sum_od);
    printf("Sum Of Odd Index elements : %d\n",sum_od);
    printf("Sum Of Even Index elements : %d\n",sum_ev);
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
    sum_Array_Elements(a,n);
}
