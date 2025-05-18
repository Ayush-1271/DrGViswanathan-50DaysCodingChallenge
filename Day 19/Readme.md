# Dr. G. Vishwanathan 50 Days Coding Challenge - Day 19  
**Organized by VIT Bhopal University**

📅 **Date:** May 19, 2025  
📹 **Video Explanation:**  
https://drive.google.com/file/d/1BQxRjw6b7wSzdDxDsgtlFXlmv01H7NZL/view?usp=drive_link  

---

## 🧠 Problem 1: Best Time to Buy and Sell Stock  

🔗 **LeetCode Link:**  
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

### 📄 Problem Statement:
You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`-th day.  
You want to maximize your profit by choosing a **single day to buy** one stock and choosing a **different day in the future to sell** that stock.  
Return the **maximum profit** you can achieve from this transaction.  
If you cannot achieve any profit, return `0`.

### 🧩 Logic:
- Track the **minimum price** encountered so far while traversing the array.
- At each step, calculate the **potential profit** by subtracting the minimum price from the current price.
- Update the maximum profit if the current profit is higher.

### 📘 Concepts Used:
- **Single-pass traversal** using a `for` loop.
- **Minimum value tracking**.
- **Greedy approach** for time optimization.
- **Time Complexity:** `O(n)`

---

## 🧠 Problem 2: Valid Parentheses  

🔗 **LeetCode Link:**  
https://leetcode.com/problems/valid-parentheses/

### 📄 Problem Statement:
Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is **valid**.  

A string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.

### 🧩 Logic:
- Use a **stack** to keep track of opening brackets.
- Traverse the string:
  - Push opening brackets to the stack.
  - On encountering a closing bracket, check if it matches the top of the stack.
  - If not, return `false`.
- At the end, the stack should be empty if the string is valid.

### 📘 Concepts Used:
- **Stack data structure**.
- **Bracket matching** logic.
- **Character traversal** and conditional validation.
- **Memory management** using `malloc` and `free` in C.

---

## 📁 File Structure:
- `best-time-to-buy-and-sell-stock.c`
- `valid-parentheses.c`

Each file contains the C code implementation based on the above logic.

---

✅ Keep learning, keep building!  
#DrGVishwanathan50DaysCodingChallenge  
#VITBhopal
