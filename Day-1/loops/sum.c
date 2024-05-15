#include <stdio.h>
#include<unistd.h>

void numrev(int);
void num_sum(int);
void num_large(int);
void main()
{
    int n,a,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    num_sum(n);
    printf("\n");
    sleep(2);
    numrev(n);
    sleep(2);
    num_large(n);
}
void num_sum(int n){
    int a,sum;
   while (n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of Integer:  %d\n",sum);
}
void numrev(int a){
    int new1=0,t,i;

    for (i=1;a>0;i++)
    {
        t=a%10;
        new1=new1*10+t;
        a=a/10;
    }
    printf("Reverse %d\n",new1);
}


void num_large(int l){
    int a,c=0;
    while(l>0){
        a=l%10;
        if(a>=c)
        {c=a;}
        l=l/10;
    }
    printf("Large Digit is %d \n",c);
}