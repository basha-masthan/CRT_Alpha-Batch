#include <stdio.h>
#include<stdlib.h>

void rev(int *p,int n){
    int i,k[n],c=0;
    for(i=n-1;i>=0;i--){
        k[c]=*(p+i);
        c++;
    }
      for(i=0;i<n;i++){
        printf(" %d ",k[i]);
    }
}

void main()
{
    int i,n,*p;
    printf("Enter order of prime:");    scanf("%d",&n);    
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){  printf("Memmory Not allocated");  exit(0);   }
    for(i=0;i<n;i++){
        printf("a[%d]:",i);    scanf("%d",p+i);    
    }
    rev(p,n);
}