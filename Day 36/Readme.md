# Day 36 - DrGViswanathan 50 Days Coding Challenge

Welcome to Day 36 of the **#DrGViswanathan 50 Days Coding Challenge** 🎯  
Today's problems focus on **recursive depth-first search in binary trees** and **two-pointer techniques in string manipulation**.

📹 **Video Explanation:**  
https://drive.google.com/file/d/154ebAkM_NKCATbznH1HQFMHOoLjGfJCS/view?usp=sharing

---

## Problem 1: Sum Root to Leaf Numbers

🔗 LeetCode Link: https://leetcode.com/problems/sum-root-to-leaf-numbers/  
📂 File: `sum-root-of-lead-numbers.c`

### ✅ Problem Statement:
You are given the root of a binary tree where each node contains a digit from 0–9. Each root-to-leaf path represents a number.  
Return the total sum of all root-to-leaf numbers.

### 💡 Logic:
- Use **depth-first search (DFS)** to explore all paths from root to leaf.
- At each node, multiply the accumulated value by 10 and add the node's value.
- If the node is a leaf, return the formed number.
- Recurse on both left and right subtrees and sum up their results.

### 🧠 Concepts Used:
- **Recursive DFS Traversal**
- **Binary Tree Path Sum**
- **Backtracking to form numbers from root to leaf**

---

## Problem 2: Reverse Vowels of a String

🔗 LeetCode Link: https://leetcode.com/problems/reverse-vowels-of-a-string/  
📂 File: `reverse-vowel-of-a-string.c`

### ✅ Problem Statement:
Write a function that takes a string and reverses only the vowels in it.

### 💡 Logic:
- Use two pointers (`left` and `right`) to scan the string from both ends.
- Increment/decrement the pointers until a vowel is found on both sides.
- Swap the vowels and continue until the pointers meet.

### 🧠 Concepts Used:
- **Two-Pointer Technique**
- **Character Classification**
- **In-place String Manipulation**

---
