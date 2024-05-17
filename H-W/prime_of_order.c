#include <stdio.h>

int prm_ord(int n){
    int i;
    if(n<=1)
        return 0;
    for(i=2;i*i<=n;i++){
        if(n%i==1)
            return 0;
    }
    return 1;
}

void main()
{
    int i,n,t=0;
    printf("Enter order of prime:");    scanf("%d",&n);    
    int pp=prm_ord(n);
    
}