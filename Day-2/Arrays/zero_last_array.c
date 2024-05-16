#include<stdio.h>

void main(){
    int n,c=0,z=0;
    printf("Enter the size of array:");scanf("%d",&n);
    int arr[n],b[n],i,j;
    for(i=0;i<n;i++){   printf("Enter arr[%d] :",i); scanf("%d",&arr[i]);   }

    for(i=0;i<n;i++){
        if(arr[i]!=0)
            b[c++]=arr[i];
    }
    while(c<n){
        b[c++]=arr[i];
    }
    printf("")
}

