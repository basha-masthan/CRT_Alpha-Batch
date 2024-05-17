#include <stdio.h>

void L_s(int *p,int n){
    int i,l,s;
    l=s=*(p);
    for(i=0;i<n;i++){
        if(s>=*(p+i))
            s=*(p+i);
        if(l<=*(p+i))
            l=*(p+i);
    }
    printf("Small =%d\nLarge =%d",s,l);
}


void main(){
    int n,i;          
    // printf("Basic Testing array with pointer...");
    // test_array();
    printf("Testing with function parameter passing");
    printf("Enter size of array:"); scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);   scanf("%d",&a[i]);
    }
    L_s(a,n);

}
