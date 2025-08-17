
# 🔬 Experiment 09: Pointer Basics  

## 🎯 Aim  
To understand the fundamentals of pointers in C++ and implement various pointer operations like pointer arithmetic, array manipulation, and string traversal.  

---

## 📌 Objectives  
- To learn how pointers store and manipulate memory addresses.  
- To implement pointer arithmetic (increment, difference).  
- To use pointers for array operations such as reversal.  
- To explore pointers in string handling.  
- To compare memory movement in different data types using pointer increments.  

---

## 📖 Theory  

### 🔹 What is a Pointer?  
A pointer is a variable that stores the memory address of another variable. Instead of storing data directly, it “points” to the memory location where data resides.  

---

### Declaration  
```cpp
int *ptr;   // pointer to int


###💾Memory & Pointers  

Every variable in C++ is stored at a unique memory address.  

Pointers help us:  
- Access that address.  
- Perform operations relative to that address.  
- Manipulate data indirectly.  

---

# ➕ Pointer Arithmetic  

Pointers can be incremented (`ptr++`) or decremented (`ptr--`).  

⚠️ The movement is not by **1 byte**, but by the **size of the data type**.  

- **Increment (`ptr++`)** → Moves to the next memory block of its data type.  
- **Decrement (`ptr--`)** → Moves to the previous memory block.  
- **Difference (`ptr2 - ptr1`)** → Returns the number of elements between two pointers.  

---

## Example Table  

| Data Type | Size (bytes) | Initial Address | After `ptr++` |  
|-----------|--------------|-----------------|---------------|  
| int       | 4            | 1000            | 1004          |  
| float     | 4            | 2000            | 2004          |  
| bool      | 1            | 3000            | 3001          |  
| double    | 8            | 4000            | 4008          |  

---

# ⭐ Why Use Pointers?  
- Efficient memory handling  
- Dynamic memory allocation  
- Array & string manipulation  
- Faster access in data structures (linked lists, trees, etc.)  

---

# ✅ Advantages of Pointers  
- **Dynamic Memory Allocation** → Manage memory during runtime (`new`, `delete`).  
- **Efficient Array Handling** → Access arrays faster than using indexing.  
- **String Handling** → Traverse and manipulate strings easily.  
- **Data Structures** → Essential for linked lists, trees, graphs, stacks, and queues.  

---

# 🌍 Real-World Applications  
- **Game Development** → Efficient memory handling for 3D objects.  
- **Operating Systems** → Pointers used in process management & memory allocation.  
- **Networking** → Buffers and data packets handled via pointers.  
- **Embedded Systems** → Direct access to hardware memory.  

---

# 💻 Program Descriptions  

### 1️⃣ Creating a Pointer & Incrementing It  
- Declared variables of different types (`int`, `float`, `bool`, `double`).  
- Printed original and incremented pointer addresses.  
- Observed how increments differ based on data type size.  

---

### 2️⃣ Sum and Difference of Pointers  
- Used two pointers pointing to different elements of an array.  
- Calculated the difference in terms of element positions.  
- Demonstrated how subtraction gives the number of elements between pointers.  

---

### 3️⃣ Reversing an Array using Pointers  
- Accessed array elements via pointers.  
- Swapped elements from both ends using pointer arithmetic.  
- Achieved in-place reversal without using extra memory.  

---

### 4️⃣ Printing a String using Pointers  
- Initialized a character array (string).  
- Used a pointer to traverse until null terminator `'\0'`.  
- Printed characters sequentially.  

---

# 🧩 Concepts Used  
- Pointer declaration and initialization  
- Address-of operator (`&`)  
- Dereference operator (`*`)  
- Pointer arithmetic (`++`, `--`, subtraction)  
- Traversing arrays and strings with pointers  
- Memory representation in C++  

---

# ✅ Conclusion  
I learnt how pointers can be useful in **dynamic memory location, in array handling, and in string handling efficiently**.  
They make programming clearer, more efficient, and easy to understand and visualize.  
Especially while **traversing arrays and strings with pointers**.  
