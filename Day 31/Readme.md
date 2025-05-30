# Day 31 - Dr. G Viswanathan 50 Days Coding Challenge

**Date:** *Father's Day & World Creativity Day*  
**Video Explanation:**  
https://drive.google.com/file/d/1RC9U8pcnd2UGwaJNLM8Mvzfnr9udnLPl/view?usp=drive_link

---

## 🟩 Problem 1: Maximum Depth of Binary Tree

- **LeetCode ID:** 104  
- **Difficulty:** Easy  
- **Link:** https://leetcode.com/problems/maximum-depth-of-binary-tree/

### ✅ Problem Statement:
Given the `root` of a binary tree, return its **maximum depth**.  
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

### 🧠 Logic Used:
- Implemented using **recursive DFS** traversal.
- For each node, we calculate:
  - `leftDepth = maxDepth(left subtree)`
  - `rightDepth = maxDepth(right subtree)`
- The final result is `1 + max(leftDepth, rightDepth)`

### 📚 Concepts Covered:
- **Binary Tree Traversal**
- **Depth-First Search (DFS)**
- **Recursion in Trees**

---

## 🔁 Problem 2: Flipping an Image

- **LeetCode ID:** 832  
- **Difficulty:** Easy  
- **Link:** https://leetcode.com/problems/flipping-an-image/

### ✅ Problem Statement:
Given a 2D binary matrix `image`, perform the following operations:
1. **Flip horizontally** – Reverse each row.
2. **Invert** – Replace each `0` with `1` and each `1` with `0`.

Return the modified matrix.

### 🧠 Logic Used:
- For each row:
  - Traverse the elements in reverse order.
  - Invert the bits using `1 - original_value`.
- Both **flipping and inversion** are done in a single loop to optimize performance.

### 📚 Concepts Covered:
- **2D Array Traversal**
- **Matrix Manipulation**
- **Bitwise Inversion**
- **Memory Allocation in C**

---
