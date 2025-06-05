# Day 37 - Dr. G Viswanathan 50 Days Coding Challenge

📅 **Challenge Theme**: Father's Day & Random Acts of Cardness Day  
🎥 **Video Walkthrough**: https://drive.google.com/file/d/17YlC4vi9mhuzAcqJssfRnPXmRpPAUwOH/view?usp=sharing  
🔗 **Repo**: https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2037  

---

## 🟩 Problem 1: Binary Tree Zigzag Level Order Traversal  
**Leetcode Problem**: 103  
**Category**: Binary Tree (Medium)

### 🔍 Problem Statement
Given a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

### 💡 Logic & Approach
- Use **Breadth-First Search (BFS)** traversal level by level using a queue.
- Track the current `level` to decide the insertion order:
  - **Even levels** → insert from **left to right**
  - **Odd levels** → insert from **right to left**
- Maintain:
  - `queue` to hold nodes at each level
  - `result` 2D array to store final zigzag values
  - `returnColumnSizes` for size of each row/level

### 🧠 Concept Used
- Queue data structure for BFS
- Alternating pattern using `level % 2`
- Memory management in C using `malloc`

---

## 🟨 Problem 2: Find First Palindromic String in the Array  
**Leetcode Problem**: 2108  
**Category**: Strings (Easy)

### 🔍 Problem Statement
Given an array of strings, return the **first palindromic string** in the array. If no such string exists, return an empty string.

### 💡 Logic & Approach
- Loop through each word in the array
- For each word, check if it is a palindrome:
  - Compare characters from both ends using two pointers (`left`, `right`)
  - If any mismatch is found, it's not a palindrome
- Return the **first** palindrome encountered

### 🧠 Concept Used
- Two-pointer technique
- String comparison
- Palindrome check logic

---

## ✅ Summary
- Reinforced **zigzag level order traversal** using BFS in trees.
- Practiced **string manipulation and palindrome detection** with linear scan.
- Focused on optimizing memory and time complexity in C.

---
