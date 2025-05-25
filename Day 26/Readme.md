# Day 26 - Dr. G Viswanathan 50 Days Coding Challenge

> 📅 Special Occasions: **Father’s Day** & **Geek Pride Day**

This day we explored two classic and foundational DSA problems involving **binary tree traversal** and **binary search** techniques. These problems are essential for anyone preparing for coding interviews or brushing up on core algorithms.

🎥 **Video Explanation:**  
https://drive.google.com/file/d/1RO_iKdpYFfUxKcypxxKSN5jFpET4dVqE/view?usp=drive_link

---

## 📘 Problem 1: Binary Tree Inorder Traversal

🔗 **LeetCode Link:**  
https://leetcode.com/problems/binary-tree-inorder-traversal/description/

### ✅ Problem Statement:
Given the root of a binary tree, return the inorder traversal of its nodes' values.

### 🧠 Logic:
- Use an **iterative approach** with a **stack** to simulate recursive inorder traversal.
- Traverse to the leftmost node, visit the node, and then go to the right.
- Store each visited node’s value in a result array.

### 🔍 Concept Used:
- **Binary Tree**
- **Inorder Traversal** (Left → Root → Right)
- **Stack-based Tree Traversal**
- **Iterative DFS Simulation**

---

## 📘 Problem 2: Find First and Last Position of Element in Sorted Array

🔗 **LeetCode Link:**  
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

### ✅ Problem Statement:
Given an array of integers sorted in non-decreasing order, find the starting and ending position of a given target value. If the target is not found, return `[-1, -1]`.

### 🧠 Logic:
- Implement two separate **binary search** functions:
  - One to find the **first occurrence**.
  - One to find the **last occurrence**.
- Each binary search adjusts the search space based on comparison while tracking the index where the target is found.

### 🔍 Concept Used:
- **Binary Search**
- **Efficient Index Finding**
- **Divide and Conquer**
- Time Complexity: **O(log n)**

---

## 📂 Files in This Repo:

- `binary-tree-inorder-traversal.c`
- `find-first-and-last-position-of-element-in-sorted-array.c`

Each file contains a clean and commented solution to its respective problem.

---
