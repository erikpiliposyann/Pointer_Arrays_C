# 🧮 Advanced Matrix Problems in C

This project includes **advanced matrix manipulation algorithms**, focusing on custom filling patterns, transposition, and geometric transformations.

---

# 📌 1. Column Zig-Zag Fill (1 → n²)

### 🧠 Task

Fill an `n x n` matrix with numbers from `1` to `n²` in a **column-wise zig-zag pattern**:

* Column 1: top → bottom
* Column 2: bottom → top
* Column 3: top → bottom
* ...

---

### Example (n = 3):

```
1 6 7
2 5 8
3 4 9
```

---

### Concepts:

* column-wise traversal
* conditional direction control
* pattern generation

---

# 📌 2. In-place Matrix Transposition

### 🧠 Task

Transpose a square matrix **in-place** (swap across main diagonal):

A[i][j] = A[j][i]

Only elements above the diagonal are swapped to avoid double swapping.

---

### Example:

```
Before:
1 2 3
4 5 6
7 8 9

After:
1 4 7
2 5 8
3 6 9
```

---

### Concepts:

* symmetric swap
* in-place algorithm
* avoiding redundant swaps

---

# 📌 3. Rotate Matrix by 180°

### 🧠 Task

Rotate a square matrix by **180 degrees**.

---

### Transformation:

Each element moves as:

A[i][j] \rightarrow A[n-1-i][n-1-j]

---

### Example:

```
Before:
1 2 3
4 5 6
7 8 9

After:
9 8 7
6 5 4
3 2 1
```

---

### Concepts:

* matrix reversal
* index mapping
* symmetric swapping

---

# 🛠️ Concepts Used

* 2D arrays
* nested loops
* index transformation rules
* in-place manipulation
* algorithmic patterns

---

# 🎯 Learning Outcomes

After completing these problems, you will understand:

* How to generate complex matrix patterns
* How matrix transposition works internally
* How geometric transformations apply to arrays
* How to optimize in-place operations

---

# ⚡ Summary

These tasks strengthen understanding of:

* Matrix traversal logic
* Index mapping techniques
* Algorithmic thinking in 2D structures
