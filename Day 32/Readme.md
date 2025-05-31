# Day 32 – Smile Day 😄  
_50 Days Coding Challenge – VIT Bhopal_

📹 **Video Walkthrough**:  
https://drive.google.com/file/d/1ZP04CM3t35p-WG-66TsDrhn73oC_qdU_/view?usp=drive_link

---

## 🔁 Problem 1: Rotate Image  
**LeetCode Problem ID**: 48  
**Difficulty**: Medium  
**Filename**: `rotate-image.c`  
**Link**: https://leetcode.com/problems/rotate-image/

### 🧠 Problem Statement  
You are given an `n x n` 2D matrix representing an image, rotate the image by 90 degrees (clockwise).  
You must rotate the image in-place, which means you have to modify the input 2D matrix directly.

### 💡 Logic  
The matrix rotation is done in two key steps:

1. **Transpose the matrix** – Convert all rows into columns by swapping `matrix[i][j]` with `matrix[j][i]`.
2. **Reverse each row** – After transposing, reverse each row to get the final rotated matrix.

This two-step approach performs the rotation **in-place** with **O(1)** extra space.

### 📘 Concept Used
- In-place Matrix Manipulation
- Transpose of a Matrix
- Reversing Arrays
- 2D Array Indexing

---

## 🌲 Problem 2: Binary Tree Level Order Traversal  
**LeetCode Problem ID**: 102  
**Difficulty**: Medium  
**Filename**: `binary-tree-level-order-traversal.c`  
**Link**: https://leetcode.com/problems/binary-tree-level-order-traversal/

### 🧠 Problem Statement  
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

### 💡 Logic  
We use **Breadth-First Search (BFS)** via a queue to perform a level-by-level traversal:

- Use a custom `QueueNode` struct to keep track of nodes and their levels.
- Enqueue the root node with level 0.
- While the queue is not empty:
  - Dequeue a node, store its value in the appropriate level list.
  - Enqueue its children with level + 1.
- Track the number of nodes at each level and dynamically fill the result 2D array.

### 📘 Concept Used
- Breadth-First Search (BFS)
- Queue Data Structure
- Level-wise Tree Traversal
- Dynamic Memory Allocation in C
- Structs and Arrays in C

---
