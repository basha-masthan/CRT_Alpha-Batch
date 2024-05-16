#include <stdio.h>

float avg1(int b[],int n);

void main(){
    int n;
    float res;
    printf("Enter Array Size :");     scanf("%d",&n);
    int a[n],i;

    for(i=0;i<n;i++)
    {printf("Enter a[%d] :",i);     scanf("%d",&a[i]);}
    
    res = avg1(a,n);
    printf("Average = %.2f",res);
}

float avg1(int b[],int n){
    int i;
    float sum=0,avg;
    for(i=0;i<n;i++){
        sum=sum+b[i];
    }
    avg = sum/n;
    return avg;
}