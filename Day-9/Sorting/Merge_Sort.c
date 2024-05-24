#include <stdio.h>

void merge(int a[],int low,int high,int mid){
    int i,j,k,c[50];
    i=low;j=mid+1;k=low;
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++;i++;
        }
        else{
            c[k]=a[j];
            k++;j++;
        }
    }
    while(i<=mid)
    {   c[k]=a[i];k++;i++;   }
    while(j<=mid)
    {   c[k]=a[j];k++;j++;   }
    for(i=low;i<k;i++)
        a[i]=c[i];
}   

void mergesort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
}

int main()
{
	int n,res,i;
	// printf("Enter size of array:"); 
    scanf("%d",&n);
	int arr[n],key;
	//printf("Array elements:");
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);
	// printf("Enter search element:");	scanf("%d",&key);
	mergesort(arr,0,n);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}