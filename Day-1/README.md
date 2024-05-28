1.if else program example

#include <stdio.h>                                       
void main()                                              
{
int age;
printf("enter age of a person: ");
scanf("%d",&age);
if(age>=18)
         printf("Eligible for voting");
else
         printf("Not eligible for voting.");
}

------------------------------------------------------------------------------------
2.train ticket booking program

void main()
{
    printf("Train ticket booking \n");
    printf("1.sleeper-300 \n");
    printf("2.3-tier AC-500 \n");
    printf("3.2-tier AC-700 \n");
    printf("4.1-tier AC-1000 \n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter no.of seats:");
    scanf(%d),&n);
    if(choice==1)
    {
        printf("you selected sleeper \n");
        cost = n*300;
    }
    else if(choice==2)        
    {
        printf("you selected 3-tier AC \n");
        cost=n*500;
    }
    else if(choice==3)
    {
        print
    }
}
------------------------------------------------------------------------------------

3 reverse a number
#include <stdio.h>
void main()
{
  int n,sum=0,digit;
  printf("Enter n value:");
  scanf("%d",&n);
  while(n>0)
  {
      digit=n%10;
      sum=sum*10+digit;
      n=n/10;
  }
  printf("Reverse number is: %d \n",sum);
}
---------------------------------------------------------------------------------------
4.find large number

#include<stdio.h>
void main()  
{  
    int n,digit,large=0;  
   printf("Enter n value:"); 
   scanf("%d",&n);
   while(n<0)
   {
      digit=n%10;
      if(large<=digit)
      {
          large=digit;
      }
         n=n/10;   
   }
   printf("large digit is: %d \n",large);
} 
-------------------------------------------------------------------------------

5.perfect number

#include <stdio.h>
void main()
{
  int n,i,sum=0;
  printf("Enter n value:");	
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
      if(n%1==0)
      {
          sum=sum+i;
      }
  }                                                      
  if(n==sum)
        printf("%d is a perfect number",n);
  else
        printf("%d is not a perfect number",n);
}
-----------------------------------------------------------------------------------
   Home work:
  strong number
  Arm strong number
-------------------------------------------------------
6. simple array program finding sum

#include <stdio.h>
void main()
{
  int n,i;
  float sum=0,avg;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      sum=sum+a[i];
  }
  avg=sum/n;
  printf("Average of array elements: %f",avg);
}
----------------------------------------------------
#include <stdio.h>
void main()
{
  int n,i,L,s;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  L=S=a[0];
  for(i=0;i<n;i++)
  {
      L=a[i];
  }
  if(S>=a[i])
  {
      S=a[i];
  }
}
printf("Largest element is:%d \n",L)
printf("Smallest element is:%d \n",S)
printf("Largest+Smallest is:%d \n",L)



-----------------------------------------------------------------------------
4.strong number

{
#include <stdio.h>
void main()
{
    int i,n,fact,sum,temp,rem, num;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
while(n){
   i = 1,fact = 1;
   rem = n % 10;
   while(i <= rem){
      fact = fact * i;
      i++;
   }
   sum = sum + fact;
   n = n / 10;
}
if(sum == temp)
   printf("%d is a strong number",temp);
else
   printf("%d is not a strong number",temp);
}
}
-----------------------------------------------------------------------

5. armstrong number

#include <stdio.h>

int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

=================================================================
6. ============REVERSE OF NUMBER============================
