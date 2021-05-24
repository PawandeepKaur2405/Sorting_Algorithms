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
