# 🧮 Matrix Operations in C

This project contains basic and intermediate **2D array (matrix) algorithms in C**, focusing on traversal, diagonal operations, and row/column computations.

---

# 📌 1. Set Even Rows to Zero

### 🧠 Task

Replace all elements in rows with even index (0-based) with `0`.

### Example:

```
Input:
1 2 3
4 5 6
7 8 9

Output:
0 0 0
4 5 6
0 0 0
```

### Concepts:

* 2D arrays
* row-wise traversal
* conditional modification

---

# 📌 2. Sum of Secondary Diagonal

### 🧠 Task

Calculate sum of the **secondary diagonal**:

```
matrix[i][n - i - 1]
```

### Example:

```
Input:
1 2 3
4 5 6
7 8 9

Output:
15 (3 + 5 + 7)
```

### Concepts:

* diagonal indexing
* square matrices

---

# 📌 3. Sum Above Main Diagonal (Including Diagonal)

### 🧠 Task

Sum all elements where:

```
j >= i
```

### Example:

```
1 2 3
0 5 6
0 0 9

Output: 26
```

### Concepts:

* upper triangular matrix
* nested loops

---

# 📌 4. Swap Main and Secondary Diagonals

### 🧠 Task

Swap elements:

```
a[i][i] <-> a[i][n - i - 1]
```

### Example:

```
Before:
1 2 3
4 5 6
7 8 9

After:
3 2 1
4 5 6
9 8 7
```

### Concepts:

* swapping
* diagonal manipulation

---

# 📌 5. Find Minimum Element Index (NxM Matrix)

### 🧠 Task

Find position (row, column) of the smallest element.

### Example:

```
Min element: 2
Position: (1,2)
```

### Concepts:

* linear search in 2D array
* tracking indices

---

# 📌 6. Row Maximum → 1D Array

### 🧠 Task

For each row, find maximum element and store it in a 1D array.

### Example:

```
Matrix:
1 5 3
7 2 6
4 9 8

Result:
5 7 9
```

### Concepts:

* row-wise processing
* array reduction (2D → 1D)

---

# 🛠️ Concepts Used

* 2D arrays (matrices)
* nested loops
* indexing logic
* diagonal traversal
* aggregation (min/max/sum)
* basic algorithm design

---

# 🎯 Learning Outcomes

After completing these exercises, you will understand:

* How matrices are stored in memory
* How to traverse rows and columns efficiently
* How to manipulate diagonals
* How to reduce 2D data into 1D results
* How to implement basic matrix algorithms in C

---

# ⚡ Summary

These exercises build strong fundamentals in:

* Matrix traversal
* Algorithmic thinking
* Problem decomposition
* C programming with 2D arrays
