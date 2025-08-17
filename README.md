# CPP-09-POINTER-BASICS

# Experiment 09: Pointer Basics  

## Aim  
To explore the fundamentals of pointers in C++ and implement various operations such as pointer arithmetic, array manipulation, and string traversal.  

---

## Objectives  
- Understand how pointers store and manipulate memory addresses.  
- Perform pointer arithmetic (increment, decrement, and difference).  
- Use pointers for array operations like reversal.  
- Apply pointers in string handling.  
- Compare memory movements across different data types.  

---

## Theory  

### What is a Pointer?  
A **pointer** is a variable that stores the memory address of another variable. Instead of holding actual data, it *points* to the memory location where the data is stored.  

---

### Declaration  
```cpp
int *ptr;   // pointer to int
Initialization
cpp
Copy
Edit
int x = 10;
int *ptr = &x;   // ptr stores address of x
Dereferencing
cpp
Copy
Edit
cout << *ptr;   // prints value stored at address of x
Memory & Pointers
Every variable in C++ resides at a unique memory address. Pointers allow us to:

Access that memory address.

Perform operations relative to the address.

Indirectly manipulate data.

Pointer Arithmetic
ptr++ → Moves to the next memory block of the data type.

ptr-- → Moves to the previous memory block.

ptr2 - ptr1 → Gives the number of elements between two pointers.

Example Table
Data Type	Size (bytes)	Initial Address	After ptr++
int	4	1000	1004
float	4	2000	2004
bool	1	3000	3001
double	8	4000	4008

Why Use Pointers?
Efficient memory handling.

Dynamic memory allocation.

Array and string manipulation.

Faster data structure implementation (linked lists, trees, etc.).

Advantages of Pointers
Dynamic Memory Allocation → Allocate and free memory at runtime.

Efficient Array Handling → Faster access compared to indexing.

String Handling → Easy traversal and manipulation.

Data Structures → Fundamental for linked lists, trees, graphs, stacks, and queues.

Real-World Applications
Game Development → Efficient memory for 3D objects.

Operating Systems → Memory allocation and process management.

Networking → Buffers and packet handling.

Embedded Systems → Direct hardware-level memory access.

Program Descriptions
1. Creating a Pointer & Incrementing It
Declared variables of int, float, bool, and double.

Printed original and incremented pointer addresses.

Observed how increments differ based on data type size.

2. Sum and Difference of Pointers
Used two pointers pointing to different array elements.

Calculated their difference in terms of element positions.

Showed how subtraction returns the number of elements apart.

3. Reversing an Array using Pointers
Accessed array elements through pointers.

Swapped elements from both ends using pointer arithmetic.

Achieved in-place reversal without extra memory.

4. Printing a String using Pointers
Initialized a character array (string).

Used a pointer to traverse until the null terminator '\0'.

Printed characters sequentially.

Concepts Used
Pointer declaration & initialization.

Address-of operator (&).

Dereference operator (*).

Pointer arithmetic (++, --, subtraction).

Traversing arrays and strings with pointers.

Memory representation in C++.

Conclusion
Pointers are a powerful feature in C++ that allow efficient memory access and manipulation. Through this experiment, I learned how pointers make array handling, string traversal, and dynamic memory allocation easier and faster. They are fundamental for building advanced data structures and for efficient system-level programming.
