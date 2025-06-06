# Day 38 - DrGViswanathan 50 Days Coding Challenge

📅 **Theme of the Day:** *National Eyewear Day 👓*  
🎥 **Video Walkthrough:**  
https://drive.google.com/file/d/1lTrD2Nkx5kMfPKZuK-4xkbxQaCBbzdQb/view?usp=sharing

---

## ✅ Problem 1: Search in a Binary Search Tree  
**LeetCode Link:** https://leetcode.com/problems/search-in-a-binary-search-tree/  
**File:** `search-in-a-BST.c`  
**Difficulty:** Easy  
**Category:** Binary Search Tree

### 🔍 Problem Statement
Given the root of a binary search tree (BST) and an integer value `val`, return the subtree rooted with the node that has the value `val`. If the node does not exist, return `NULL`.

### 🧠 Concept Used
- Utilizes **Binary Search** logic due to the BST property.
- If `val < root->val`, recursively search in the left subtree.
- If `val > root->val`, recursively search in the right subtree.
- Stops recursion when a match is found or a `NULL` node is reached.

### 💡 Logic Overview
- The algorithm performs a depth-first recursive search.
- Efficient due to the ordered nature of BST: O(log n) on average.

---

## ✅ Problem 2: Valid Palindrome  
**LeetCode Link:** https://leetcode.com/problems/valid-palindrome/  
**File:** `valid-palindrome.c`  
**Difficulty:** Easy  
**Category:** Strings

### 🔍 Problem Statement
Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

### 🧠 Concept Used
- Implements the **Two Pointer Technique**:
  - One pointer starts from the beginning, the other from the end.
  - Both move toward each other, skipping non-alphanumeric characters.
- Characters are compared after converting both to lowercase to handle case insensitivity.

### 💡 Logic Overview
- Time Efficient: Each character is visited at most once.
- Space Efficient: Uses in-place comparison without extra string storage.

---

## 🧵 Summary
- Practiced core tree traversal through recursive BST search.
- Strengthened string handling with edge cases using two-pointer strategy.
- Honored **National Eyewear Day** by taking a closer look (pun intended) at clarity—both in vision and in code!

---
