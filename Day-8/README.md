====RECURSION===
----------------
.A function simply calling itself is called recursion
.In recursion both calling function and called function ar4e represented at one place 
---->SYNTAX:
return_type function_name(parameters)
{
-------------
-------------
function_name(parameters);
}
...........................
 ---->FACTORIAL OF A NUMBER:
int factorial(int n)
{
if(n==0|| n==1)//initial conditions
	return 1;
else  //final conditions
	return n*factorial(n-1);
}
----->SUM OF N NUMBERS:
int sum_numbers(int n)
{
if(n==0)
	return 0;
else if(n==1)

	return 1;
else
	return n+sum_numbers(n-1);
}
void main()
{
int n;
printf("Enter n value:");
scanf("%d",&n);
printf("Factorial value:%d\n",factorial(n));
printf("sum of n numbers:%d\n",sum_numbers(n));
}
................................
---->LINEAR SEARCH:
LinearSearch(array,size,key)
   For i from 0 to size -1
     if array[i] ==key
              Return i
   Return -1
...................................
....>LINEAR SEARCH USING RECURSION:
LinearSearch(array,n,key)
   if n is 0
	return -1
   else if array[n-1==key
	return n-1
   else
	return LinearSearch(array,n-1,key)
....................................
--->BINARY SEARCH ALGORITHM :

BinarySearch(array,n,key)
low=0
high=n-1
while low<=high
mid=(low+high)
if array[mid]==key
return mid
else if array[mid]<=key
low=mid+1
else
high=mid-1
return -1
.......................................
STEP-1 low=0
              high=7
             mid=low+high/2=0+7/2
             mid=3
1)if a[mid]==key=>40==60(wrong )
2)if a[mid]<=key=>40<=60(right)
     low=mid+1=3+1=4
STEP-2 
  mid=4+7/=5
1)if a[mid]==key==>60=60
return mid
....................................
---->BINARY Search USING RECURSION
BinarySearch(array,ow,high,ey)
if low>=high
return -1
mid=(low+high)/2
if key <array[mid]
return BinarySearch[array,low,mid-1,key)
else if key >array[mid]
return BinarySearch(array,mid+1,high,key)
else
return mid
......................................
PASS=2
19 19 19 19
80 80 43 43 
43 43 80 64 
64 64 64 80
95 95 95 95
.................................
---->BUBBLE SORT:
-----------------
BubbleSort[array,size]
for p from 1 to size -1
for c from 0 to size p-1
if array[c]>array[c+1]
temp=array[c]
array[c]=array[c+1]
array[c+1]=temp
end if
end for
end for