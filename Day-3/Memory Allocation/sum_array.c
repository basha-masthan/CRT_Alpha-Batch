#include <stdio.h>
#include <stdlib.h>

void sum(int *p,int n){
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
    int n,i,*p;
    printf("Enter Size of array:"); scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)     exit(0);
    for(i=0;i<n;i++){
        printf("Entar a[%d]",i);    scanf("%d",(p+i));
    }
    sum(p,n);
}