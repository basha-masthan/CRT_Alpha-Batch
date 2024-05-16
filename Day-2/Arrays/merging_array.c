#include <stdio.h>

void main()
{
    int n,m,i;
    printf("Enter First,second array size's:");
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[n+m];


    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] value:",i);scanf("%d",&a[i]);
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        printf("Enter b[%d] value:",i);scanf("%d",&b[i]);
        c[n+i]=b[i];
    }
    
    printf("New Merged array is...\n[");

    for(i=0;i<n+m;i++)
        {
            printf(" %d ",c[i]);
        }
        printf("]\n");
        // Sum of array elements
            int sum=0;
            for(i=0;i<n+m;i++)
            {sum=sum+c[i];}
            printf("Sum of array elements --> %d\n",sum);
        // small and large array element
        int s,l;
        s=l=c[0];
        for(i=0;i<n+m;i++){
            if(s>=c[i]){
                s=c[i];
            }
            if(l<=c[i]){
                l=c[i];
            }
        }
        printf(" Small =%d\n Large = %d",s,l);
}