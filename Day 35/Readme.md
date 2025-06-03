# Day 35 - DrGViswanathan 50 Days Coding Challenge

Welcome to Day 35 of the **#DrGViswanathan 50 Days Coding Challenge**.  
Today's problems involve **Binary Trees** and **String Parsing**, focusing on recursive tree traversal and segment counting in strings.

📹 **Video Explanation:**  
https://drive.google.com/file/d/1EFjZfQfsBq5tRQNe5dvhHNi7v3L_Qk9t/view?usp=sharing

---

## Problem 1: Lowest Common Ancestor of a Binary Tree

🔗 LeetCode Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/  
📂 File: `lowest-common-ancestor-of-a-binary-tree.c`

### ✅ Problem Statement:
Given a binary tree, find the **lowest common ancestor (LCA)** of two given nodes `p` and `q`.  
The LCA is the lowest node in the tree that has both `p` and `q` as descendants (where a node can be a descendant of itself).

### 💡 Logic:
- If the root is `NULL` or matches either `p` or `q`, return the root.
- Recursively check for `p` and `q` in the left and right subtrees.
- If both left and right subtrees return non-`NULL`, the current root is the LCA.
- Otherwise, return the non-`NULL` result from the recursive calls.

### 🧠 Concepts Used:
- **Binary Tree Recursion**
- **Postorder Traversal** technique
- **Backtracking and Decision-Making** during tree traversal

---

## Problem 2: Number of Segments in a String

🔗 LeetCode Link: https://leetcode.com/problems/number-of-segments-in-a-string/  
📂 File: `number-of-segments-in-a-string.c`

### ✅ Problem Statement:
Given a string `s`, return the number of **segments** in the string.  
A segment is defined as a **contiguous sequence of non-space characters**.

### 💡 Logic:
- Traverse the string character by character.
- Increment the segment count when:
  - Current character is **not a space**, **and**
  - It's either the first character or preceded by a space.

### 🧠 Concepts Used:
- **String Parsing**
- **Character-by-Character Analysis**
- **Edge Case Handling** (trailing/leading/multiple spaces)
