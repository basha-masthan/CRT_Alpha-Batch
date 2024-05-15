#include <stdio.h>

void main()
{
    int n,i;
    float sum=0,avg;
    printf("Enter a value:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i-0;i<n;i++){
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    printf("Average of array elements %.2f",sum/n);
}