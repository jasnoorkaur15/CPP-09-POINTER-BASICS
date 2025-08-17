# 🔬 Experiment 09: Understanding Pointers & Pointer Arithmetic in C++

---

## 🎯 Aim
To study **pointers** in C++ and perform various operations including:  
- Pointer arithmetic  
- Pointer difference  
- Array reversal using pointers  
- String traversal using pointers  

---

## 📚 Theory
A **pointer** is a variable that stores the memory address of another variable.  

- The value of a pointer is the **address of the variable** it points to.  
- Pointers can be incremented or decremented using **pointer arithmetic**.  
- The movement depends on the **size of the data type**.  
- Pointers are widely used in dynamic memory allocation, arrays, strings, and data structures.  

### Pointer Arithmetic Rules
- `ptr++` → Moves to next memory block of its data type  
- `ptr--` → Moves to previous memory block  
- `ptr2 - ptr1` → Gives number of elements between two pointers  

---

## 🧮 Example Table: Pointer Increment

| Data Type | Size (bytes) | Initial Address | After `ptr++` |
|-----------|--------------|-----------------|---------------|
| int       | 4            | 1000            | 1004          |
| float     | 4            | 2000            | 2004          |
| bool      | 1            | 3000            | 3001          |
| double    | 8            | 4000            | 4008          |

---

## 📝 Algorithms & Program Descriptions

### 🔹 Program 1: Pointer Increment
1. Declare variables of type `int`, `float`, `bool`, `double`.  
2. Store their addresses in respective pointers.  
3. Increment pointers and display new addresses.  
4. Observe how increment differs with data type size.  

---

### 🔹 Program 2: Pointer Difference
1. Declare an integer array.  
2. Assign two pointers to different array elements.  
3. Subtract one pointer from the other.  
4. Display result → shows number of elements between them.  

---

### 🔹 Program 3: Reverse an Array using Pointers
1. Take an integer array.  
2. Assign two pointers → start and end.  
3. Swap values until pointers meet in the middle.  
4. Display reversed array.  

---

### 🔹 Program 4: Print String using Pointers
1. Initialize a character array (string).  
2. Assign pointer to first element.  
3. Traverse until `'\0'`.  
4. Print characters sequentially.  

---

## 🧩 Concepts Used

- Pointer declaration and initialization  
- Address-of operator (`&`)  
- Dereference operator (`*`)  
- Pointer arithmetic (`++`, `--`, subtraction)  
- Traversing arrays and strings with pointers  
- Memory representation in C++  

---

## ✅ Conclusion

- Learnt how **pointers** can be useful in:  
  - Dynamic memory allocation  
  - Array handling  
  - String manipulation  
