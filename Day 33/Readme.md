# Day 33 – DrGViswanathan 50 Days Coding Challenge

## Problem 1: Binary Tree Right Side View  
**LeetCode Link:** https://leetcode.com/problems/binary-tree-right-side-view  
**File:** `binary-tree-right-side-view.c`

### 🧩 Problem:
Given the `root` of a binary tree, return the values of the nodes you can see from the right side, ordered from top to bottom.

### 💡 Logic:
We use level-order traversal (Breadth-First Search) and process nodes level by level. At each level, the last node encountered is the rightmost node visible from that level. We store and return these rightmost node values in order.

### 📘 Concept Used:
- Level-order traversal (BFS)
- Queue data structure
- Binary tree traversal
- Extracting the last node at each level

---

## Problem 2: Lexicographically Smallest Palindrome  
**LeetCode Link:** https://leetcode.com/problems/lexicographically-smallest-palindrome  
**File:** `lexicographically-smallest-pallindrome.c`

### 🧩 Problem:
You are given a string `s`. You are allowed to change characters only at positions `i` and `n - 1 - i`. Return the **lexicographically smallest palindrome** that can be formed by applying such operations.

### 💡 Logic:
We use a two-pointer approach, starting from both ends of the string. For each pair of characters, we replace both with the lexicographically smaller character if they differ. This ensures that the resulting string is both a palindrome and the smallest possible lexicographically.

### 📘 Concept Used:
- Two-pointer technique
- String manipulation
- Greedy approach
- Lexicographical comparison
