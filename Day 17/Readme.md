# 🧠 Dr. G. Vishwanathan 50 Days Coding Challenge – Day 17

📆 **Day 17 – Father's Day Challenge & International Day of Light**

🎥 **Video Explanation**:  
https://drive.google.com/file/d/1RH0BKZi7yyUWPPrKbp_3LvdQ3IocKTJQ/view?usp=drive_link

---

## 🌟 Problem 1: Min Stack  
🔗 Problem: https://leetcode.com/problems/min-stack/description/  
📄 File: `min-stack.c`

### 🧩 Problem Statement:
Design a stack that supports the following operations in constant time:
- `push(x)` – Push element x onto stack.
- `pop()` – Removes the element on the top of the stack.
- `top()` – Get the top element.
- `getMin()` – Retrieve the minimum element in the stack.

---

### 🧠 Logic:
To keep track of the minimum efficiently:
- Use **two stacks**:
  - One for normal values (`data`).
  - Another to keep the **minimum value** at each level (`minData`).
- When pushing a value, update both stacks:
  - Store the current value.
  - Store the **minimum** of current value and previous minimum.
- On popping, reduce the `top` index (used as stack pointer).

---

### 📚 Concepts Used:
- Stack Data Structure  
- Constant-time operations with auxiliary data structure  
- Space-Time optimization via parallel stack strategy

---

## 🌟 Problem 2: Two Sum  
🔗 Problem: https://leetcode.com/problems/two-sum/description/  
📄 File: `two-sum.c`

### 🧩 Problem Statement:
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.  
You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

---

### 🧠 Logic:
- Use a **custom-built hash table** using open addressing (linear probing).
- For every number:
  - Calculate its **complement** (`target - current number`).
  - Check if the complement exists in the hash table.
  - If yes, return the pair of indices.
  - If no, store the current number and its index into the table.
- The hash function handles both positive and negative numbers.

---

### 📚 Concepts Used:
- Hashing (using linear probing for collision handling)  
- Lookup optimization to reduce time from O(n²) to O(n)  
- Basic memory management in C with `malloc`, `calloc`, and `free`
