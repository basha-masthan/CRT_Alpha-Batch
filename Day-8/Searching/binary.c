#include <stdio.h>

int BinSrc(int arr[],int n,int val){
    int mid,low,high;
    low =0;high=n-1;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==val)
            return mid;
        if(arr[mid]<=val)
            low=mid+1;
        high=mid-1;
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
    res = BinSrc(arr,n,val);
    if(res == -1)
        printf("Element not found...");
    else
        printf("Element found at %d",res);
    return 0;
}