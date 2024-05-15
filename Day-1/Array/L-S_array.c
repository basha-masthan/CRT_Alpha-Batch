#include <stdio.h>

void main()
{
    int n,i,L,S;
    printf("Enter a value:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i-0;i<n;i++){
        scanf("%d",&a[i]);
    }
    L=S=a[0];
    for(i=0;i<n;i++){
        if(L<=a[i]){
            L=a[i];
        }
        if(S>=a[i]){
            S=a[i];
        }
    }
    printf("Large is %d\n",L);
    printf("Small is %d\n",S);
    printf("Large + Small is %d\n",L+S);
}