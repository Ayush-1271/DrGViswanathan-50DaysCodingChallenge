# Day 29 – Dr. G. Viswanathan 50 Days Coding Challenge

📹 **Video Walkthrough:**  
https://drive.google.com/file/d/1COx7WM-p_rIqSRR9nspKDSMgOz0rJD0L/view?usp=drive_link

---

## 🟢 Problem 1: Sum of Left Leaves

📌 **LeetCode Link:**  
https://leetcode.com/problems/sum-of-left-leaves/

### ✅ Problem Statement:
Given the root of a binary tree, return the sum of all left leaves.

A **leaf** is a node with no children. A **left leaf** is a leaf that is the left child of its parent.

### 💡 Logic:
- Check if a left child exists and is a leaf.
- If so, add its value to the sum.
- Recursively traverse the left and right subtrees.

### 🧠 Concept Used:
- **Binary Tree Traversal (DFS - Depth First Search)**
- **Leaf Node Identification**
- **Recursive Tree Processing**

---

## 🟡 Problem 2: Kth Largest Element in an Array

📌 **LeetCode Link:**  
https://leetcode.com/problems/kth-largest-element-in-an-array/

### ✅ Problem Statement:
Find the kth largest element in an unsorted array. It is guaranteed that `k` is always valid (1 ≤ k ≤ array length).

### 💡 Logic:
- Use a **min-heap** of size `k`.
- Insert the first `k` elements into the heap.
- For remaining elements, if an element is greater than the root (smallest in heap), replace root and heapify down.
- The root of the heap will be the kth largest element.

### 🧠 Concept Used:
- **Heap Data Structure (Min Heap)**
- **Heapify Up and Down Operations**
- **Priority Queue Logic**

---

## 📁 Files

- `sum-of-left-leaves.c` – Solution to Sum of Left Leaves using recursive DFS.
- `kth-largest-element-in-an-array.c` – Solution using a custom Min Heap implementation.

---

🛠️ These problems helped reinforce the usage of **recursive tree processing** and **heap-based selection algorithms**, both crucial for coding interviews and real-world data structure optimization tasks.

