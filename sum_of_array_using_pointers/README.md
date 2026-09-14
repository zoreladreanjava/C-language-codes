
# Array Sum and Print Using Pointers in C

This program demonstrates how to use pointers to traverse and manipulate arrays. It reads 9 integers into an array, prints them, and calculates their sum—all using pointer arithmetic instead of array indexing.

----------

## Features

1.  **Pointer-Based Input**: Reads integers into the array using pointer offset (`p + i`).
    
2.  **Pointer Traversal**: Iterates through the array using a moving pointer and an end pointer.
    
3.  **Array Printing**: Displays all elements separated by spaces.
    
4.  **Array Summation**: Computes and prints the sum of all elements.
    
5.  **Explicit Pointer Usage**: Function parameters are pointers (`int *array`), making the pointer nature clear.
    

----------

## Key Concepts

-   **Array Decay**: When an array is passed to a function, it decays to a pointer to its first element.
    
-   **Pointer Arithmetic**: `array + i` gives the address of the i-th element; `*(array + i)` accesses its value.
    
-   **End Pointer**: `int *end = array + size;` points one past the last element, useful for loop termination.
    
-   **Moving Pointer**: `for (int *i = array; i < end; i++)` walks through the array without an index variable.
    
-   **`scanf` with Pointers**: `scanf("%d", p + i)` stores input directly at the address `p + i`.
    

----------

## 🛠 Code

### Main

```c
#include <stdio.h>
int sumArray ( int *array, int size );
void printArray ( int *array, int size );
int main ( void ) {
 int array [ 9 ];
 int size = sizeof ( array ) / sizeof ( array [ 0 ] );
 printf ( "Enter 9 integers: " );
 int *p = array; // read integers into the array using pointer
 for ( int i = 0; i < size; i++ )
 scanf ( "%d", p + i );
 printArray ( array, size );
 printf ( "\n" );
 sumArray ( array, size );
 return 0;
}
```
### Sum Function

```c
int sumArray ( int *array, int size ) {
 int sum = 0;
 int *end = array + size; // pointer to the end of the array
 for ( int *i = array; i < end; i++ )
 sum += *i;
 printf ( "Sum of all array elements: %d", sum );
 return sum;
}
```
### Print Function

```c
void printArray ( int *array, int size ) {
 int *end = array + size; // pointer to the end of the array
 for ( int *i = array; i < end; i++ )
 printf ( "%d ", *i );
}
```

----------

## 🧪 Example Execution

**Input:**

```text
Enter 9 integers: 10 20 30 40 50 60 70 80 90
```
**Output:**

```text
10 20 30 40 50 60 70 80 90 
Sum of all array elements: 450
```
----------

## 📊 Execution Trace (Conceptual)


## Execution Trace Table

| Step | Action | Pointer `p` / `i` | Value Accessed | Array State |
|---:|---|---|---|---|
| 1 | Read input | `p + 0` to `p + 8` | — | `[10,20,30,40,50,60,70,80,90]` |
| 2 | `printArray` | `i = array` → `end` | `*i` | Prints each element |
| 3 | `sumArray` | `i = array` → `end` | `*i` | Sums each element → `450` |

----------

## 🖼 Memory Diagram (ASCII)

```text
array:  [10] [20] [30] [40] [50] [60] [70] [80] [90]
 ^
 array (also p)
end = array + 9 → points just past [90]
```
When `i` moves from `array` to `end - 1`, it visits each element exactly once.

----------

## 📌 Notes

-   The functions `sumArray` and `printArray` use `int *array` instead of `int array[]` to emphasize pointer usage.
    
-   `array + size` is a valid pointer (one past the last element) and is safe to compare against.
    
-   The code avoids array indexing entirely in the functions, relying solely on pointer arithmetic.
    

----------
### Other Sample Outputs:
- ![sample output 1](https://github.com/zoreladreanjava/C-language-codes/blob/main/sum_of_array_using_pointers/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladreanjava/C-language-codes/blob/main/sum_of_array_using_pointers/sampleOutput2.PNG)