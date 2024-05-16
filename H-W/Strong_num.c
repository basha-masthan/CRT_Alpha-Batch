#include <stdio.h>

void main(){
    int n,arr[20],c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int nn=n,a,aa;
    while(n>0){
        a=n%10;     int aa=a,t=1;
        while(a>0)   {  t=t*a; a=a-1;   }
        arr[c]=t;   n=n/10;     c=c+1;
        printf("Fact of %d ---> %d\n",aa,t);
    }

    int fact =0;
    for(int i=0;i<c;i++){
        fact=fact+arr[i];
        // printf("Fact of %d ---> %d\n",i,arr[i]);
    }

    if(fact == nn){
        printf("Given number is a Strong number...");
    }
    else{
        printf("Given number is Not a Strong number...");
    }


}