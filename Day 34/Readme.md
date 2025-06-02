# C Programs – LeetCode Practice

This repository contains solutions to two LeetCode problems implemented in C:

1. **Flatten Binary Tree to Linked List**
2. **Length of Last Word**

🔗 **Video Explanation**:  
https://drive.google.com/file/d/1lB0U6H7_V5Kx78tXtBYWgjY_zgoiCsSF/view?usp=sharing

---

## 1. Flatten Binary Tree to Linked List

**📄 File:** `flatten-binary-tree-to-linked-list.c`

### 🧩 Problem

Given the `root` of a binary tree, flatten the tree into a "linked list":

- The linked list should use the **right** pointers to point to the next node.
- The left pointers should be set to `NULL`.
- The linked list should follow the **preorder traversal** of the binary tree.

> [LeetCode Problem #114 - Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)

### 💡 Logic

- Use **reverse preorder traversal** (i.e., right → left → root).
- Maintain a pointer to the previously visited node.
- At each node:
  - Set `node->right = prev`
  - Set `node->left = NULL`
  - Update `prev` to current node

This transforms the tree **in-place** without using additional space.

### 📚 Concept Used

- Binary Tree Traversal
- Recursion
- In-place modification
- Pointer manipulation

---

## 2. Length of Last Word

**📄 File:** `length-of-last-word.c`

### 🧩 Problem

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A word is a **maximal substring** consisting of non-space characters only.

> [LeetCode Problem #58 - Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

### 💡 Logic

1. Start from the end of the string.
2. Skip all trailing spaces.
3. Count the length of the word until another space or beginning of the string is encountered.

### 📚 Concept Used

- String manipulation
- Pointer traversal
- Edge case handling for trailing spaces

---
