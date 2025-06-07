# Day 39 - LeetCode Solutions

🔗 **Video Explanation**  
https://drive.google.com/file/d/1KbCgIe-P7i0T4OfriTR25rDemz2ZaLnS/view?usp=sharing

This README summarizes the logic and core concepts used in solving two LeetCode problems for Day 39 of the **#DrGViswanathan 50 Days Coding Challenge**.

---

## 🧩 Problem 1: Insert into a Binary Search Tree

🔗 **LeetCode Link:**  
https://leetcode.com/problems/insert-into-a-binary-search-tree/

📄 **File Name:**  
`insert-into-a-BST.c`

### 🔍 Problem Description:
You are given the root of a binary search tree (BST) and a value to insert. Return the root node of the BST after insertion. The input tree will always satisfy the BST property.

### 💡 Logic Used:
- If the tree is empty, insert the value at the current node.
- Recursively traverse to the **left** subtree if the value is less than the current node.
- Recursively traverse to the **right** subtree if the value is greater than or equal to the current node.
- Return the unchanged root to preserve the tree structure.

### 🧠 Concepts Covered:
- **Binary Search Tree (BST)** properties
- **Recursive traversal**
- **Dynamic memory allocation** in C
- Building tree nodes and maintaining BST invariants

---

## 🧩 Problem 2: Remove All Adjacent Duplicates In String

🔗 **LeetCode Link:**  
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

📄 **File Name:**  
`remove-all-adjacent-duplicates-in-string.c`

### 🔍 Problem Description:
Given a string, repeatedly remove adjacent duplicate characters until no more such pairs exist. Return the resulting string.

### 💡 Logic Used:
- Use a character array as a **stack**.
- Iterate through each character of the string:
  - If the stack's top element is the same as the current character, **pop** it (i.e., remove duplicate).
  - Otherwise, **push** the current character onto the stack.
- Terminate the final string with a null character.

### 🧠 Concepts Covered:
- **Stack-based string manipulation**
- **Character array simulation of a stack**
- **Time complexity:** O(n), where n is the length of the input string
- Efficient in-place duplicate removal without recursion

---
