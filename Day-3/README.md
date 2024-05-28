                                                               ----------------------------------------------------------------POINTERS AND STRUCTURES------------------------------------------------
    * size of pointer is 4 bytes.
    * we can handle array.
    *  we can store any variable address in a pointer.
    *  Address is always positive and interger .
    * we can store multiple values at a time pointer stores the address of the variable.
POINTER: A variable which stores the another variable is known as pointer.
----------------------------------------------------------------------------------------------------------------------------------------------------
------------> * ---> de-reference operator
example:
# include<stdio.h>
void main()
{
int a=10;
int *ptr;                                            
ptr=&a;
printf("%d \n",a);
printf("%d \n",&a);
printf("%d \n",*(&a));
printf("%d \n",ptr);
printf("%d \n",*ptr);
printf("%d \n",&ptr);
}
------------------------------------------------------------------------------------------------------------------------------
===================REVERSE OF A NUMBER USING POINTERS USING PARAMETER AND RETURN VALUES=================================
#include<stdio.h>
int reverse(int *ptr);
void main()
{
int n;
printf("Enter n value: ");
scanf("%d",&n);
printf("reverse number is: %d",reverse(&n));
}
int reverse(int *ptr)
{
int sum=0,digit;
while(*ptr>0)
{
digit=*ptr%10;
sum=sum*10+digit;
*ptr=*ptr/10;
}
return sum;
}
----------------------------------------------------------------------------------------------------------------------------------------
======================FACTORIAL PROGRAM IN POINTER===================================
void factorial(int *ptr);
void main()
{
int n;
printf("Enter n value: ");
scanf("%d",&n);
printf("factorial is: %d",&n,factorial);
}
void factorial(int *ptr)
{
int n,f=1,i;
printf("Enter n value: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    *ptr=*ptr*i;
}
}
-----------------------------------------------------------------------------------------------------------------------------------------------
==========================POINTER ARITHMETIC================================
pointer----->pointer addition or any operation is not possible
pointer+constant is possible
p1=1000
p1 ++ = p1 +1=1004
p2 =2000
p2+4=2016
base_address+value*datatype_size
address should be near

Example:
 #include<stdio.h>
void main()
{
int a=5;
int *p1;
p1=&a;
printf("%d \n",p1);
p1++;
printf("%d \n",p1);
printf("%d \n",p1+5);
}
----------------------------------------------------------------------------------------------------------------------------------------------------------
======================================POINTER TO ARRAY==========================================
*
-----------------------------------------------------------------------
EXAMPLE :
//ACCESSING ARRAY  USING POINTER.
#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50};
int *ptr,i;
ptr=a; //ptr=&a[0];
for(i=0;i<5;i++)
{
     //printf("%d \n",&a[i]);
printf("%d \n",ptr+i);
   //printf("%d \n",a[i]);
printf("%d \n\n",*(ptr+i));
}
}
--------------------------------------------------------------------------------
//SUM OF ARRAY ELEMENTS AT ODD INDEX POSITIONS.
#include<stdio.h>
void main()
{
int n,i;
printf("Enter size of array: ");
scanf("%d",&n);
inta[n];
printf("Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sum of elements at odd indexes: %d",sum_elements(a,n));
}
int sum elements(int *ptr,int n)
{
int sum=0,1;
for(i=0;i<n;i++)
{
if(i%2==1)
sum=sum+(ptr+i);
}
return sum;
}
-----------------------------------------------------------------------------------------------
//FIND THE SMALLEST VALUE USING ARRAY IN POINTER
int main()
{
      int a[5],*s,i,small;
      s=&a[0];
      printf("Enter 5-Elements :\n\n ");
      for(i=0;i<5;i++,s++)
            scanf("%d",s);
      s=&a[0];
      small=*s;
      for(i=0;i<5;i++,s++)
            if(*s<small)
                  small=*s;
      printf("\nSmallest Element : %d",small);
      return 0;
}
-----------------------------------------------------------------------------------------------------
//FIND THE SMALLEST NUMBER USING FUNCTIONS IN POINTER
------------------------------------------------------------------------------------------------------------
====================
#include<stdio.h>
void main()
{
    int n,i,pos,key;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:");
    scanf("%d",&key);
    pos=search(a,n,key);
    if(pos>=0)
          printf("Element found at %d position",pos+1);
    else
          printf("Element not found.");
}
int search(int *ptr,int,n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==*(ptr+i))
        {
            return i;
        }
    }
    return -1;
}
-------------------------------------------------------------------------------------------------------------
===================DYNAMIC MEMORY ALLOCATION=========================
*Generally we can allocate in two ways- one is at compile time  and the other is at runtime.
*Suppose if you are allocated memory at compile time of a program is called static memory allocation. This memory is fixed point.
*Suppose if you are allocated memory at runtime of a program is called dynamic memory allocation and the memory an variable size.
*in c programming for allocating and deallocating memory we will use the following functions:-
1.malloc()
2.calloc()
3.realloc()
4.free()

1.MALLOC():-

*purpose := allocating a single block of memory dynamically.
*Syntax:= ptr=(int *)malloc(20)
                   ptr=(int  *)malloc(n*size(int));
*a)memory is created succesfully, it returns first byte address.
  b)memory is not created successfully, it returns NULL pointer.
*It returns a void pointer, so, type casing is mandatory.

=================EXAMPLE PROGRAM IN MALLOC()==================================
//AVERAGE  OF ARRAY ELEMENTS
#include<stdio.h>
#include<stdlib.h>
int average(int *p, int n);
void main()
{
	int n,i,*ptr;
	printf("Enter size of array: ");
	scanf("%d",&n);
	 ptr=(int *)malloc(n*sizeof(int));
	 if(ptr==NULL)
	 {
	     printf("Memory is not allocated");
	     exit(0);
	 }
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("sum of array elements:%d",average(ptr,n));
}
int average(int *p, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	  return sum;
}


------------------------------------------------------------------------------------------------------------------------------------------------
calloc()
--->purpose:- Allocates a multiple block of memory dynamically,
----->Syntax:ptr=(int *)calloc(n,size of(int));
*a)memory is created succesfully, it returns first byte address.
  b)memory is not created successfully, it returns NULL pointer.
*It returns a void pointer, so, type casing is mandatory..
----------------------------------------------------------------------
EXAMPLE PROGRAM ON CALLOC://
#Iinclude<stdio.h>
#include<stdlib.h>
int search(int *ptr,int n,int key);
void main()
{
int n,i,pos,key,*ptr;
printf("enter size of array:");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("memory not created");
exit(0);
}
printf("enter array elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&key);
}
printf("enter search element:");
scanf("%d",&key);
pos=search(ptr,n,key);
if(pos>=0)
printf("Element found at %d position",post+i);
else
printf("Element not found");
}
int search(int *ptr,int,n,int key)
{
int i;
for(i=0;i<n;i++)
{
if(key==*(ptr+i))
{
return i;
}
}
return -1;
}
------------------------------------------------------------------------------------------------------------------------------
===============================NULL POINTER==================================
//EXAMPLE PROGRAM
#include<stdio.h>
void main()
{
int*ptr=NULL;
if(ptr==NULL)
{
printf("pointer does not point to anything");
}
else
{
printf("value pointed by pointer:%d",*ptr);
}
}
============================VOID POINTER====================================
*It is called universal pointer
*type casting is mandate
EXAMPLE PROGRAM:
#include<stdio.h>
void main()
{
int a=10;
float b=3.14;
void*ptr; //Declaring a void pointer 
ptr=&a;
printf("value is:%d\n",*(int*)ptr);
ptr=&b;
printf("value is:%f\n",*(float*)ptr);
}
-------------------------------------------------------------------------------------------------------------------------------------
========================POINTER TO POINTER==============================
  *A pointer to a pointer, also known as a double pointer, is a variable 

EXAMPLE PROGRAM:
#include<stdio.h>
void main()
{
int num=10;
{
int num=10;
int*ptr1=&num;//pointer to an interger
int*ptr2=&ptr1;//pointer to a pointer(double pointer)
printf("value of num:%d\n",**ptr2);
}
---------------------------------------------------------------------------------------------------------------------------------------
==================================DANGLING POINTER=========================
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr=(int *)malloc(sizeof(int));
*ptr=15;
free(ptr);
printf("%d",*ptr);
}











