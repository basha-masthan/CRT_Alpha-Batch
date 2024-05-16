#include<stdio.h>

void main(){
    int n,c=0;
    printf("Enter the size of array:");scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++){   printf("Enter arr[%d] :",i); scanf("%d",&arr[i]);   }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)    {   if(arr[i]==arr[j])  break;  }
        if(i==j)
        {   printf(" %d ",arr[i]);  c++;    }
    }
        printf("\n No of Distinct Elements : %d ",c);
}