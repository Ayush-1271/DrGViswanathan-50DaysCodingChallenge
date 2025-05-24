# Day 25 – #DrGViswanathan 50 Days Coding Challenge

Welcome to **Day 25** of the #DrGViswanathan 50 Days Coding Challenge!  
This day focuses on creative data structure usage and efficient in-place array manipulation.

📹 **Video Explanation**:  
https://drive.google.com/file/d/1TMVMMkyFhr66qY58VQP88zH4xaPbmX1B/view?usp=drive_link

---

## 🧠 Problem 1: Implement Stack Using Queues

📄 **File**: `implement-stack-using-queues.c`  
🔗 **Leetcode Problem**: https://leetcode.com/problems/implement-stack-using-queues/

### 🔍 Problem Statement:
Implement a stack using only queue operations. You must implement the following operations:
- `push(x)`
- `pop()`
- `top()`
- `empty()`

### ✅ Logic:
- Maintain two queues: `q1` and `q2`.
- Always push new elements into `q2`, then dequeue all elements from `q1` and enqueue them into `q2`.
- Swap `q1` and `q2` after each push, so that `q1` always holds the current stack order.

This ensures that the front of `q1` will always have the latest pushed element, effectively simulating **LIFO** behavior.

### 💡 Concepts Used:
- **Queue operations (`enqueue`, `dequeue`)** to simulate stack operations.
- **Two-queue technique** to maintain the correct order of elements.
- **Pointer swapping** to avoid additional memory reallocation.

---

## 🔁 Problem 2: Rotate Array

📄 **File**: `rotate-array.c`  
🔗 **Leetcode Problem**: https://leetcode.com/problems/rotate-array/

### 🔍 Problem Statement:
Given an array, rotate it to the right by `k` steps, where `k` is non-negative.

### ✅ Logic:
- Use the **Reversal Algorithm** to rotate the array in-place with O(1) space complexity.
- The steps are:
  1. Reverse the entire array.
  2. Reverse the first `k` elements.
  3. Reverse the remaining `n-k` elements.

For example, rotating `[1,2,3,4,5,6,7]` by `k = 3` gives `[5,6,7,1,2,3,4]`.

### 💡 Concepts Used:
- **In-place array manipulation** using a helper `reverse` function.
- **Modulo operation** to handle large `k` values.
- **Divide and conquer** style approach to simplify array rotation.

---
