# Day 44 - DrGViswanathan 50 Days Coding Challenge

📹 **Video Walkthrough:**  
https://drive.google.com/file/d/1okJuLqfmYsA8a3K86cAmhxXogPhbx1-6/view?usp=sharing

---

## ✅ Problem 1: Convert Sorted List to Binary Search Tree  
**LeetCode Link:** https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/  
**Difficulty:** Medium  
**Filename:** `convert-sorted-list-to-BST.c`

### 🧠 Problem Summary
Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height-balanced binary search tree.

### ⚙️ Concepts Used
- **Linked List Traversal**
- **Binary Search Tree (BST)**
- **Slow and Fast Pointers Technique**
- **Recursion & Divide and Conquer**

### 💡 Logic
- We use the **slow and fast pointer** technique to find the middle node of the linked list. This node becomes the **root of the BST**.
- Recursively, we divide the list into two parts:
  - The left half forms the **left subtree**.
  - The right half forms the **right subtree**.
- This strategy ensures that the BST remains **height-balanced**.

---

## ✅ Problem 2: Maximum Number of Vowels in a Substring of Given Length  
**LeetCode Link:** https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/  
**Difficulty:** Medium  
**Filename:** `maximum-number-of-vowels-in-a-substring-of-given-length.c`

### 🧠 Problem Summary
Given a string and an integer `k`, return the maximum number of vowel letters in any substring of length `k`.

### ⚙️ Concepts Used
- **Sliding Window Technique**
- **Vowel Detection**
- **String Manipulation**

### 💡 Logic
- We first compute the number of vowels in the **initial window** of length `k`.
- Using a **sliding window**, we move forward one character at a time:
  - If the character leaving the window is a vowel, decrement the count.
  - If the character entering is a vowel, increment the count.
- Track the **maximum count** seen during this process.

---
