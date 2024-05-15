#include <stdio.h>

void main(){
    int n,i;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        if (i%2==1)
            printf(" %d ",i);
    }
}