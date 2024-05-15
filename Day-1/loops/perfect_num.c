#include <stdio.h>

void main()
{
    int i,n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(n==sum)
        printf("%d is a Perfect number",n);
    else{
        printf("%d is a Not Perfect number\n",n);
        main();
    }

}