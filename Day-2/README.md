1. merging of two arrays with different size:

#include <stdio.h>
void main()
{
  int n,m,i;
    printf("Enter the sizes of two arrays:");
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[n+m];
    printf("Enter the 1st array elements:");
    for(int i=0;i<n;i++) 
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    printf("Enter the 2nd array elements:");
    for(i=0;i<m;i++) 
    {
       scanf("%d",&b[i]);
       c[n+i]=b[i];
    }
    printf("merged array is:");
    for(i=0;i<n+m;i++)
    {
        printf("%d",c[i]);
    }
...........................................................................

2.count the distinct element of the array

#include<stdio.h>
void main()
{
 int n,i,j,count=0;
 printf("Enter size of array:");
 scanf("%d",&n);
 int a[n];
 printf("Enter array elements:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<i;j++)
     {
         if(a[i]==a[j])
         break;
     }
     if(i==j)
     {
         printf("%d",a[i]);
         count++;
     }
 }
 printf("\n count of distinct element are:%d",count);
}
------------------------------------------------------------------------

3.trace of matrix:

#include<stdio.h>
void main()
{
    int r,c,sum,i,j;
    printf("Enter order of matrix:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter matrix elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
                  sum=sum+a[i][j];
        }
    }
    printf("Trace of  matrix is:%d",sum);
}
----------------------------------------------------------------------------
3-1 .sum of diagnol & opposite diagonal elements:

 logic:
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j || i+j==r-1)
                  sum=sum+a[i][j];
        }
    }
--------------------------------------------------------------------------
3-2 .sum of elements other than diagnol & opposite diagnol elements.

logic:

for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j || i+j==r-1)
                        continue;
            else
                  sum=sum+a[i][j];
        }
    }
----------------------------------------------------------------------------
                                   FUNCTIONS:



   syntax of functions:  return_type function name(parameters_list)
                         {
                           declaration/initialization statements;
                           executable stmts;
                           return stmts;
                          }
   
   Example:           int addition(int a, int b)             int addition(int a, int b)
                      {                                      {
                       int c;                                return a+b;
                       c=a+b;                         (or)   }
                       return c;
                      }

example program:
 
   -------------FUNCTION WITH PROTOTYPE-----------

   #include<stdio.h>
   void gist();   //prototype or function declaration
   void main()
   {
      gist();  // calling function
   }
   void gist()  // called function
   {
        printf("GIST COLLEGE \n");
        printf("NELLLORE");
   }

 ---------------FUNCTION WITHOUT PROTOTYPE-------------------

   #include<stdio.h>
   void gist()  // called function
   {
        printf("GIST COLLEGE \n");
        printf("NELLLORE");
   }
   void main()
   {
      gist();  // calling function
   }
 
.------------------FACTORIAL OF A NUMBER-------------------------

#include<stdio.h>
void factorial();
void main()
{
    factorial();
}
void factorial()
{
    int n,f=1,i;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          f=f*i;
    }
 printf("%d factorial is: %d",n,f);
}
==========================================================================
-------------------FIND THE SUM OF GIVEN NUMBER IN FUNCTIONS----------------------------

#include <stdio.h>
void num();
void main()
{
    num();
}
void num()
{
    int n,i,sum=0,digit;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("sum of digits of the number is %d",sum);
}
--------------------------------------------------
============CALL BY VALUE PROGRAM IN FUNCTION=======================

#include<stdio.h>
void factorial(int m);
void main()\
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    factorial(n); //calling function
}                                              //n= Actual parameter (actual peremeter present in calling function and it is a original value )
void factorial(int m)                          //m=formal parameter  (formal peremeter present in called function and it is a duplicate value)
{
    int f=1,i;
    for(i=1;i<=m;i++)
    {
        f=f*i;
    }
    printf("%d factorial is:%d",m,f);
}
--------------------------------------------------------------------
=================PASSING ARRAY AS A PARAMETER TO A FUNCTION======================
#include<stdio.h>
float average(int b[], int n);
void main()
{
    int n,i;
    float result;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=average(a,n);
    printf("Average is: %f",result);
}
float average(int b[], int n)
{
    int i;
    float sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    avg=sum/n;
=================================================================
--------------TRACE OF A MATRIX USING FUNCTION==================

#include<stdio.h>
void Trace(int r,int c,int a[][c]);
void main()
{
	int r,c,i,j;
	printf("Enter order of matrix:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter matrix elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	Trace(r,c,a);
}
void Trace(int r,int c,int a[][c])
{
	int sum=0,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
                        sum=sum+a[i][j];
		}
	}
	printf("Trace of matrix is: %d",sum);
}

=====================================================================================
---------------------------------upper traingular matrix-----------------------------
#include<stdio.h>
void UpperTriangularMatrix(int row, int col)
{
       int a[row][col];
       printf("\nEnter the Elements \n");
      
       // Nested loop to input array elements from the user
       for(int i = 0; i<row; i++)
       {
         for(int j = 0; j<col; j++)
         {
       		scanf("%d", &a[i][j]);
         }
       }
       
       printf("Required Matrix : "); 
       // Nested loop to print upper triangular matrix  
 	   for(int i = 0; i<row; i++)
       {
         printf("\n");
         for(int j = 0; j<col; j++)
         {
             // Check if column >= row
     		 if(j >= i)
    		 printf(" %d ", a[i][j]);
    		 else
    		 printf(" 0 ");
          }
       }
}

int main()
{
  int row, col;
  
  // Input number of rows and columns by the user
  printf("\nEnter Number of rows : ");
  scanf("%d", &row); 

  printf("\nEnter Number of columns : ");
  scanf("%d", &col);
  
  // Calling Upper triangular Matrix function 
  UpperTriangularMatrix(row,col);
  
  return 0;
}

========================================================================================
------------------------reverse of number in functions------------------------------------
#include<stdio.h>
void reverse(int n)
void main()
{
int n;
printf("Enter n value: ");
scanf("%d",&n);
printf("reverse number is: %d",reverse(n));
}
void reverse(int n)
{
int sum=0,digit;
while(n>0)
{
digit=n%10;
sum=sum*10+digit;
n=n/10;
}
return sum;
}
 
