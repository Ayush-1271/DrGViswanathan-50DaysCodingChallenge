# Day 18 - Dr. G. Vishwanathan 50 Days Coding Challenge 🚀  
**Father’s Day Edition**

📅 **Date:** 17 May 2025  
🎥 **Video Explanation:**  
[Watch Here](https://drive.google.com/file/d/12Ia8gZnCMFsXZh1LuuHBturPZcdLDzPQ/view?usp=drive_link)

📁 **GitHub Repository:**  
[Day 18 Folder](https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2018)

---

## ✅ Problems Solved

### 1. [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/description/)

#### 🧠 Logic & Concept:
To implement a queue using only stack operations, we use **two stacks**:
- `inStack`: used to store newly added elements.
- `outStack`: used to reverse the order for dequeue operation.

**Push Operation:**
- Directly push the element into `inStack`.

**Pop/Peek Operation:**
- If `outStack` is empty, transfer all elements from `inStack` to `outStack`.
- Then perform pop or peek from `outStack`.

This allows us to simulate **FIFO** behavior using two **LIFO** structures.

**Concepts Used:**
- Stack Implementation
- Queue Simulation via Stack Reversal
- Amortized Analysis
- Memory Allocation in C

---

### 2. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)

#### 🧠 Logic & Concept:
To detect duplicates in an array:

1. **Sort** the array using `qsort` from `stdlib.h`.
2. Iterate over the array and compare adjacent elements.
3. If any two adjacent elements are equal, return `true`.

This approach ensures that all duplicates will be adjacent after sorting.

**Concepts Used:**
- Efficient Sorting with `qsort`
- Pointer Arithmetic & Comparison
- Time Complexity:
  - Sorting: O(n log n)
  - Scanning: O(n)
- Space Efficiency (no extra data structures used)

---

## 📂 File Structure

- `implement-queue-using-stack.c` – Code for queue using two stacks.
- `contains-duplicate.c` – Code for duplicate detection using sorting.

All code is written in **C language**, with efficient memory usage and clean logic.

---

## 💬 Reflections

> Today’s tasks were the **most challenging** yet in the challenge.  
> I faced numerous **failures and retries**, especially with managing stacks and pointers correctly in C.  
> But with persistence and debugging, I gained a **deeper understanding** of stack-based logic and sorting-based problem solving.  
> A very **rewarding experience**! 💪🔥

---

## 📌 Tags

#DrGVishwanathan50DaysCodingChallenge  
#VITBhopal  
#CProgramming #DSA #LeetCode  
#ImplementQueueUsingStacks #ContainsDuplicate  
#CodingChallenge #DailyCoding #ProblemSolving  
#FatherDayChallenge #GrowthMindset  
