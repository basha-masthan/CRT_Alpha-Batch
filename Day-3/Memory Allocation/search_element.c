#include <stdio.h>
#include <stdlib.h>

int search_k(int *p,int n,int k){
    int i;
     for(i=0;i<n;i++){
        if(k== *(p+i))
            return i;
    }
    return -1;
}

void main()
{
    int i,n,v,k,*p;
    printf("Enter Length of array:");    scanf("%d",&n);    
    p=(int*)calloc(n,sizeof(int));    
    if(p==NULL){  printf("Memmory Not allocated");  exit(0);   }
    for(i=0;i<n;i++){
        printf("a[%d]:",i+1);    scanf("%d",p+i);    
    }
    printf("Enter A Key to Search:");    scanf("%d",&k);    
    v=search_k(p,n,k);
    if(v>=0)    printf("Element Found in Position %d\n",v+1);
    else        printf("Element Not Found\n");
}