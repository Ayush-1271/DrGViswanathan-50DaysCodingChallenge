# Day 41 – Delete Node in a BST & Longest Common Prefix

📹 **Video Explanation**:  
https://drive.google.com/file/d/1Slm9DM9z8UhCnN1se78p1au_cymrLjGv/view?usp=sharing

---

## 🧩 Problem 1: Delete Node in a BST  
**Filename**: `delete-node-in-a-BST.c`  
**LeetCode**: https://leetcode.com/problems/delete-node-in-a-bst/

### 🔍 Problem Statement:
Given a root node of a Binary Search Tree (BST) and a key, delete the node with the given key in the BST while maintaining the properties of the BST.

### 💡 Logic:
- If the key is smaller or larger than the current node's value, recursively move to the left or right subtree.
- Once the node to be deleted is found:
  - **Case 1**: Node has no children → delete directly.
  - **Case 2**: Node has one child → replace the node with its child.
  - **Case 3**: Node has two children → find the inorder successor (minimum value node in the right subtree), copy its value to the current node, and delete the successor recursively.

### 📘 Concept Used:
- **Binary Search Tree Properties**
- **Recursion**
- **Inorder Successor**
- **Tree Manipulation**

---

## 🧵 Problem 2: Longest Common Prefix  
**Filename**: `longest-common-prefix.c`  
**LeetCode**: https://leetcode.com/problems/longest-common-prefix/

### 🔍 Problem Statement:
Given an array of strings, return the longest common prefix among them. If there is no common prefix, return an empty string `""`.

### 💡 Logic:
- Start by assuming the entire first string is the common prefix.
- Compare each subsequent string character by character with the prefix.
- Reduce the length of the prefix until it matches all strings.
- If at any point no characters match, return an empty string.

### 📘 Concept Used:
- **String Matching**
- **Prefix Comparison**
- **Iterative Reduction of Prefix**
- **Memory Allocation in C**

---

✅ These problems deepen the understanding of **recursive tree operations** and **efficient string manipulation**, essential for mastering Data Structures and Algorithms in C.

---
