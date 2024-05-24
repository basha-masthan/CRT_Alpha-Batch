#include <stdio.h>

int linearS(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)
            return i;
    }
    return -1;
}

int linearS_rec(int a[],int n,int val){
    if(n==0)
        return -1;
    else if(a[0]==val)
        return 0;
    else if (a[n]==val)
        return n;
    else
        return linearS_rec(a,n-1,val);
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
     
    res_rec = linearS_rec(arr,n,val);
    if(res == -1)
        printf("Element not found...");
    else
        printf("Element found at %d",res_rec);
    return 1;
}