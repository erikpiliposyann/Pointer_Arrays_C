# 🧠 C Programming: Pointers & Array Algorithms

This project contains **advanced C exercises** covering pointers, bit-level memory inspection, array manipulation, and searching algorithms.

---

# 📌 1. Endianness Check (Little / Big Endian)

### 🧠 Task

Determine system byte order using a pointer.

### Idea:

```c
int x = 1;
char *p = (char*)&x;
```

* If `*p == 1` → Little Endian
* Else → Big Endian

---

# 📌 2. Pack Values into an Integer

### 🧠 Task

Store:

* `char c1`
* `char c2`
* `short sh`

inside a single `int` using pointer manipulation.

### Concepts:

* type casting
* memory layout
* pointer arithmetic

---

# 📌 3. Count Odd Elements

### 🧠 Task

Count how many odd numbers exist in an array.

### Logic:

a \bmod 2 = 1

---

# 📌 4. Rearrange Array (Even Left, Odd Right)

### 🧠 Task

Rearrange array so that:

* Even numbers → left side
* Odd numbers → right side

### Technique:

* Two-pointer approach
* In-place swapping

---

# 📌 5. Compare Two Arrays

### 🧠 Task

Check if two arrays are identical element-by-element.

### Condition:

A[i] = B[i] ; \forall i

---

# 📌 6. Linear Search (Find Index)

### 🧠 Task

Find index of a target element in an array.

* If found → print index
* If not found → print `-1`

---

# 📌 7. Check if Array is Sorted (Descending)

### 🧠 Task

Verify whether array is sorted in decreasing order.

### Condition:

A[i] \ge A[i+1]

---

# 📌 8. Find Unique Element

### 🧠 Task

Find the element that appears only once while others are duplicated.

### Approach:

* nested loops
* frequency check

---

# 📌 9. Missing Number in Range 1..N

### 🧠 Task

Find missing number from array containing numbers `1..N` except one.

### Formula:

\text{Missing} = \frac{N(N+1)}{2} - \sum A[i]

---

# 🛠️ Concepts Used

* pointers and memory access
* bit-level system behavior
* arrays and loops
* two-pointer technique
* searching algorithms
* mathematical optimization

---

# 🎯 Learning Outcomes

After completing these tasks, you will understand:

* How memory is structured (endianness)
* How pointers interact with raw memory
* Efficient array manipulation techniques
* Searching and validation algorithms
* Mathematical shortcuts for array problems

---

# ⚡ Summary

These exercises strengthen:

* Low-level C understanding
* Algorithmic thinking
* Pointer arithmetic mastery
* Array processing techniques
