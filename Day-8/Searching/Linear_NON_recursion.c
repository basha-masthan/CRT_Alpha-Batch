#include <stdio.h>

int linearS(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)
            return i;
    }
    return -1;
}

int main(){
    printf("Enter size of array:"); int n,val;
    scanf("%d",&n);
    int arr[n],res,res_rec;
    printf("Enter array elements:"); for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter Value to find in the array:"); 
    scanf("%d",&val);
    res = linearS(arr,n,val);
    if(res == -1)
        printf("Element not found...");
    else
        printf("Element found at %d",res);
}