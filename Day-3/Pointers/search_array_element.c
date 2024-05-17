#include <stdio.h>


int scr_ele(int *p,int n,int k){
    int i;
    for(i=0;i<n;i++){
        if(k== *(p+i))
            return i;
    }
    return -1;
}


void main()
{
    int n,i,p,k;
    printf("Enter size of array:"); scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);   scanf("%d",&a[i]);
    }
    printf("Enter Search element:");    scanf("%d",&k);
    p=scr_ele(a,n,k);
    if(p>=0){
        printf("Element found at %d",p);
    }
    else
        printf("Element not found..");
}