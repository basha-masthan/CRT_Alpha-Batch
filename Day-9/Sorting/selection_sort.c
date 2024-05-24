#include <stdio.h>

int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        int t = arr[min];
        arr[min]=arr[i];
        arr[i]=t;
    }
}

int main()
{
	int n,res,i;
	printf("Enter size of array:"); scanf("%d",&n);
	int arr[n],key;
	printf("Array elements:");
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);
	// printf("Enter search element:");	scanf("%d",&key);
	sort(arr,n);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}