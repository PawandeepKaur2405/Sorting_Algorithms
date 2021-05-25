Arranging elements in a particular order is called **Sorting**.

# Sorting Algorithms

## 1. Bubble Sort
It is the simplest sorting Algorithm.  
In this, consecutive elements are compared using loop and if first element is greater than the next element(in case of Ascending order), it is swapped.  

Example:   

**First Pass:**   
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.   
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4   
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2   
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.  

**Second Pass:**  
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2   
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )   
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )   
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.  

**Third Pass:**   
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )   
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )   
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )   
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )  

**TIME COMPLEXITY : O(n^2)**  
**SPACE COMPLEXITY : O(1)**

## 2. Insertion Sort

**Key Point** : In this sorting technique, insert an element from unsorted array to it's correct position in sorted array.

**Example:** 

12, 11, 13, 5, 6  
Let us loop for i = 1 (second element of the array) to 4 (last element of the array)  
i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12   
11, 12, 13, 5, 6  
i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13  
11, 12, 13, 5, 6  
i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position.   
5, 11, 12, 13, 6  
i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position.   
5, 6, 11, 12, 13   

**TIME COMPLEXITY : O(n^2)**  
**SPACE COMPLEXITY : O(1)**

## 3. Selection Sort

**Key Point :** Find minimum element in unsorted array and swap it with element at beginning.**(pick and exchange sort)**

**Example:**  

arr[] = 64 25 12 22 11  

Find the minimum element in arr[0...4] and place it at beginning  
11 25 12 22 64

Find the minimum element in arr[1...4] and place it at beginning of arr[1...4]  
11 12 25 22 64

Find the minimum element in arr[2...4] and place it at beginning of arr[2...4]  
11 12 22 25 64

Find the minimum element in arr[3...4] and place it at beginning of arr[3...4]  
11 12 22 25 64 

**TIME COMPLEXITY : O(n^2)**  
**SPACE COMPLEXITY : O(1)**

## 4. Merge Sort

It works on **Divide and Conquer** technique.

1. Divide the array into two equal arrays until only 2 elements are present in the array.(This makes the problem small and hence reduces the sorting time)  
2. Call your **merge_sort** function recursively for both halves.  
3. Merge both halves using **merge** function.  

**TIME COMPLEXITY : O(nlogn)**  
**SPACE COMPLEXITY : O(n)** (Because we made extra temp arrays) 

**DRAWBACKS :**
1. Not efficient for short arrays.
2. Runs through the entire array even if the array is sorted.
3. Merge sort algorithm uses an addition space of O(n) for temporary arrays.

## 5. Wave Sort
  
The elements are sorted in the **form of a wave** rather than ascending or descending order.  

**arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= .........**

**APPROACH :**  
1. Iterate through elements by step of 2.  
2. Check if element is smaller than the previous and  next element, then it's ok, just continue.  
3. Otherwise, swap the elements.

**TIME COMPLEXITY : O(n)**  

## 6. Counting Sort

This is not a comparison based sorting technique.

**APPROACH:**  

1. First find count of each distinct element of array.  
2. Calculate position of each element.  
3. Form a new sorted array based on these positions.

**TIME COMPLEXITY : O(max(N,Ai))**  
N -> size of the array  
Ai -> max element of array  

## 7. DNF Sort (Dutch National Flag Sort / 0,1,2 Sort)  

This sorting technique is used to sort members in an array **only when there are 3 distinct elements.**  

Application : Seggregate 0s and 1s in an array.  

**TIME COMPLEXITY : O(n)**  
**SPACE COMPLEXITY : O(1)**  

## 8. Quick Sort

It is **divide and conquer** Algorithm.  

**APPROACH :**  
1. Pick a **pivot element** from array.  
2. **Partition** around pivot element.  
3. Arrange smaller elements before the pivot element and larger elements after the pivot element. 

[NOTE: We can pick first, last, median or any random element as pivot. But it should remain same for entire Array]  

**TIME COMPLEXITY :   
  for Average Case : O(nlogn)  
  for Worst : O(n^2)**  
  
  For more details visit :   
  for DNF Sort :  
  https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/  
  for Wave Sort :  
  https://www.geeksforgeeks.org/sort-array-wave-form-2/  
  for rest :  
  https://www.geeksforgeeks.org/sorting-algorithms/
  
