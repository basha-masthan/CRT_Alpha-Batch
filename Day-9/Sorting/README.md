====SELECTION SORT====
---->ALGORITHM:
SelectionSort(array,size)
for I from 0 to size -1
min=i
for j from i+1 to size-1
if array[j]<array[min]
min=j
end if
end for
temp=array[min]
array[min]=array[i]
array[i]=temp
end for
..................................
====INSERTION SORT====
---->ALGORITHM:
InsertionSort(array,size)
for i from 1 to size -1
temp=array[i]
j=1
while j>0 and array[j-1]>temp
array[j]=array[j-1]
j=j-1
end while
array[j]=temp
end for 
.....................................
====MERGE SORT====
---->ALGORITHM:
Merge(array,low,high,mid)
Create a temporary array c with size(high-low+1)
Initialize variables i,j,and k
set i to low,j to mid+1,and k to 0
while i<=mid and j<=high
if array[i]<array[i]
increment k and i
else
set c[k]to array[j]
increment k and j
while i<=mid
set c[k]to array[i]
increment k and i
copy elements from array c back to array a,starting from index low Dellocate memory allocated for array c
mergeSort(array,low,high)
if low<high
set mid to (low+high)/2
The left of the array:mergeSort(array,low,mid)
the right of the array:mergeSort(array,mid+1,high)
merge the sorted left and right halves:merge(array,low,high,mid)
..............
---->QUICK SORT;
.Select the first element as i and select the same element as pivot
if a[i]<pivot then move i index by 1 position in forward direction otherwise stop it
if a[j]>a[pivot] then decrement j index by 1 position in backward direction otherwise stop it
if i and j doesnot cross eachother then interchange elements of a[i] and a[j]
if i and j processed eachother then interchange elements of a[j] and a[pivot], and this is the correct position of pivot element
..............................
---->QUICK SORT:
---------------
Quicksort(array,low,high)
if low<high
pivot=low
i=low
j=high
while i<j
while i<=high and array[i]<=array[pivot]
i=i+1
while array[j]>array[pivot]
j=j-1
if i<j
temp=array[i]
array[i]=array[j]
array[j]=temp
temp=array[pivot]
array[pivot]=array[i]
array[i]=temp
temp=array[pivot]
array[pivot]=array[j]
array[j]=temp
pivot=j
Quicksort(array,low,pivot-1)
Quicksort(array,pivot+1,high)