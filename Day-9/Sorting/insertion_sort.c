#include <stdio.h>

int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int t=arr[i];
        int j=i;
        while(j>0 && arr[j-1]>t){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=t;
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
	sort(arr,n);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}