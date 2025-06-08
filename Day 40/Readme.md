# Day 40 – DrGViswanathan 50 Days Coding Challenge

📅 **Occasion**: Father’s Day & Best Friend Day  
🎥 **Video Explanation**:  
https://drive.google.com/file/d/1H-KO8dvafhx8KPuu6niZNkRPAVrk9ec1/view?usp=sharing

## ✅ Problems Solved:

### 1. Lowest Common Ancestor of a Binary Search Tree  
🔗 **LeetCode Link**:  
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/  
📁 **Filename**: `lowest-common-ancestor-of-a-BST.c`

#### 🧩 Problem Statement:
Given a Binary Search Tree (BST), find the **lowest common ancestor (LCA)** of two given nodes. The LCA of two nodes `p` and `q` is the lowest node in the tree that has both `p` and `q` as descendants.

#### 💡 Logic & Approach:
- Leverage the properties of BST:
  - If both `p` and `q` are smaller than root, move to the left subtree.
  - If both are greater, move to the right subtree.
  - If one is on each side, the current node is the LCA.
- Implemented using an iterative traversal for optimal performance.

#### 🧠 Concept Used:
- Binary Search Tree properties
- Iterative traversal
- Lowest Common Ancestor (LCA) theory

---

### 2. Rotate String  
🔗 **LeetCode Link**:  
https://leetcode.com/problems/rotate-string/  
📁 **Filename**: `rotate-string.c`

#### 🧩 Problem Statement:
Given two strings `s` and `goal`, return true if and only if `s` can become `goal` after some number of **rotations** (shifting characters from front to back).

#### 💡 Logic & Approach:
- First, check if lengths are equal.
- Concatenate `s + s` and check if `goal` is a substring of this new string.
- If yes, then `goal` is a valid rotation of `s`.

#### 🧠 Concept Used:
- String manipulation
- Substring check using `strstr`
- Rotation detection using `s + s` trick
