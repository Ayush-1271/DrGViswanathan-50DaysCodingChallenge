# Day 30 – DrGViswanathan 50 Days Coding Challenge

🎥 **Video Explanation:**  
https://drive.google.com/file/d/1txGIiXdGRo7v_UlBGr-Gl7ZzkOJDgbYc/view?usp=drive_link

---

## ✅ Problem 1: Find the Duplicate Number

📂 **File:** `find-the-duplicate-number.c`  
📎 **LeetCode Link:** https://leetcode.com/problems/find-the-duplicate-number/

### 🔍 Problem Statement:
Given an array `nums` containing `n + 1` integers where each integer is in the range `[1, n]`, return the duplicate number.  
There is only **one repeated number**, but it could be repeated more than once.

### 💡 Logic:
- Treat the array like a **linked list** where `nums[i]` is the next node.
- Due to the duplicate, this list contains a **cycle**.
- Use **Floyd’s Tortoise and Hare (Cycle Detection Algorithm)**:
  - Phase 1: Detect the intersection point of the cycle.
  - Phase 2: Move both pointers from start and intersection to find the entrance of the cycle → which is the duplicate number.

### 🧠 Concepts Used:
- Cycle detection in arrays using **Floyd’s Algorithm**
- **Fast and slow pointer** technique
- Constant extra space (O(1)), no modification to array

---

## ✅ Problem 2: Diameter of Binary Tree

📂 **File:** `diameter-of-binary-tree.c`  
📎 **LeetCode Link:** https://leetcode.com/problems/diameter-of-binary-tree/

### 🔍 Problem Statement:
Given the root of a binary tree, return the **diameter** of the tree.  
The diameter is the **length of the longest path** between any two nodes. The path may or may not pass through the root.

### 💡 Logic:
- Perform a **post-order DFS traversal**.
- For each node, compute:
  - Height of its left subtree
  - Height of its right subtree
- Diameter through the node = `left_height + right_height`
- Keep a global variable to track the **maximum diameter** encountered.

### 🧠 Concepts Used:
- **Depth-First Search (DFS)**
- **Post-order traversal** of binary trees
- Recursive computation of subtree height
- Tracking maximum path length globally

---
