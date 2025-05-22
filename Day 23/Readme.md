# 📁 DSA Problems - C Implementations

This repository contains solutions to two classic problems from LeetCode, implemented in C:

- [`longest-valid-parentheses.c`](./longest-valid-parentheses.c)
- [`search-insert-position.c`](./search-insert-position.c)

🎥 **Video Walkthrough:**  
[https://drive.google.com/file/d/1dC8w2k4DJ2Q3x43W-yR6R8xa-xQ8_pB7/view?usp=drive_link](https://drive.google.com/file/d/1dC8w2k4DJ2Q3x43W-yR6R8xa-xQ8_pB7/view?usp=drive_link)

---

## 🧩 Problem 1: Longest Valid Parentheses

### 🔗 LeetCode Link
[https://leetcode.com/problems/longest-valid-parentheses/](https://leetcode.com/problems/longest-valid-parentheses/)

### 💡 Problem Statement
Given a string containing just the characters `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.

### ✅ Logic
- A stack is used to track indices of unmatched `'('` characters.
- A base value of `-1` is pushed onto the stack to handle the edge case of a valid sequence starting from the beginning.
- On encountering a `')'`, we pop from the stack:
  - If the stack becomes empty, we push the current index as the new base.
  - Otherwise, we calculate the length of the valid substring from the current index to the top of the stack.

### 📘 Concept Used
- Stack-based parsing.
- Index tracking for calculating substring lengths.
- Handling edge cases using a sentinel/base index.

---

## 🧩 Problem 2: Search Insert Position

### 🔗 LeetCode Link
[https://leetcode.com/problems/search-insert-position/](https://leetcode.com/problems/search-insert-position/)

### 💡 Problem Statement
Given a **sorted** array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

### ✅ Logic
- Binary Search is used to efficiently find the position.
- Start with left and right pointers.
- Calculate mid index.
- Narrow down the search space based on whether the target is less than or greater than `nums[mid]`.
- If the target is not found, the left pointer will be at the correct insert position.

### 📘 Concept Used
- Binary Search.
- Time Complexity: O(log n) due to divide-and-conquer strategy.
- Efficient handling of sorted arrays.

---
