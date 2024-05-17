#include <stdio.h>

int k[10][10];

void trace(int,int);
void diagonal(int,int);
void up_triangle(int,int);
void low_triangle(int,int);

void main(){
    int n,m,i,j;
    printf("Enter no of Rows & columns:");
    scanf("%d %d",&n,&m);
    int a[n][m],sum=0;

    // Matrix Input
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            k[i][j]=a[i][j];
        }
    }

    // Matrix Printing
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",a[i][j]);
        }
         printf("\n");
    }

    trace(n,m);
    diagonal(n,m);
    up_triangle(n,m);
    low_triangle(n,m);
}


void trace(int n,int m){
    int i,j,sum=0;
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j || i+j==n-1)
                sum = sum + k[i][j];
        }
    }
     printf("Trace of a Matrix : %d\n",sum);
}

void diagonal(int n,int m){
     int i,j,sum=0;
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j || i+j==n-1)
                continue;
            else
                sum = sum + k[i][j];
        }
    }
     printf("After Trace of a Matrix : %d\n",sum);
}

void up_triangle(int n,int m){
    printf("\n Up_Triange Matrix \n");
     int i,j,sum=0,p[n][m];
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            p[i][j]=k[i][j];
            if (i>j)
                p[i][j]=0;
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",p[i][j]);
        }
         printf("\n");
    }
}

void low_triangle(int n,int m){
    printf("\n Low_Triange Matrix \n");
     int i,j,sum=0,p[i][j];
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            p[i][j]=k[i][j];
            if (i<j)
                p[i][j]=0;
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",p[i][j]);
        }
         printf("\n");
    }
}
