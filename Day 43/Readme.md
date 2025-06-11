# Day 43 – Dr. G. Viswanathan 50 Days Coding Challenge

📅 **Category:** Binary Search Tree & String Manipulation  
🎥 **Video Walkthrough:**  
https://drive.google.com/file/d/1nQP8xAvS5OoE0IN0cTTFwnYhxhopakvt/view?usp=sharing

---

## ✅ Problem 1: Kth Smallest Element in a BST

- **LeetCode Link:** https://leetcode.com/problems/kth-smallest-element-in-a-bst/
- **File Name:** `kth-smallest-element-in-BST.c`
- **Difficulty:** Medium  
- **Category:** Binary Search Tree

### 🔍 Problem Statement:
Given the root of a binary search tree (BST) and an integer `k`, return the `k`th smallest value (1-indexed) of all the values of the nodes in the tree.

### 🧠 Logic:
- **Inorder traversal** of a BST yields the nodes in sorted ascending order.
- Perform an in-order traversal and count the number of nodes visited.
- When the count reaches `k`, store the current node's value as the result.

### 📘 Concepts Used:
- Binary Search Tree property
- In-order traversal
- Global/static counters to preserve traversal state across recursive calls

---

## ✅ Problem 2: Zigzag Conversion

- **LeetCode Link:** https://leetcode.com/problems/zigzag-conversion/
- **File Name:** `zig-zag-conversion.c`
- **Difficulty:** Medium  
- **Category:** Strings

### 🔍 Problem Statement:
The characters of a string are written in a zigzag pattern on a given number of rows and then read row by row. Convert the given string to that zigzag format.

### 🧠 Logic:
- Use an array of strings or dynamic buffers to represent each row in the zigzag format.
- Traverse the input string, placing characters in the correct row while changing direction when reaching the top or bottom.
- Concatenate all rows to form the final output string.

### 📘 Concepts Used:
- Zigzag pattern simulation
- Direction switching logic
- Dynamic string manipulation
- Multi-line row construction and final join operation

---
