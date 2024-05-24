#include <stdio.h>

int sort(int a[],int n){
	
	for(int p=1;p<=n-1;p++){
		for(int c=0;c<=n-p;c++){
			if(a[c]>a[c+1])
			{
				int temp = a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}
	}
	return 1;
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