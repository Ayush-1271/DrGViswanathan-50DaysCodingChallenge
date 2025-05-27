# Day 28 – Father's Day Coding Challenge

🎯 **Date**: Day 28 of the #DrGViswanathan 50 Days Coding Challenge  
📺 **Video Walkthrough**:  
https://drive.google.com/file/d/1oYyDEjVkac4qbI9JDJfh4fRIiW7wLqPb/view?usp=drive_link

---

## 📘 Problems Solved:

---

### 1. 🌲 Minimum Depth of Binary Tree (LeetCode 111)

🔗 https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

- **Category**: Binary Tree | Easy  
- **Filename**: `minimum-depth-of-binary-tree.c`

#### 🧠 Problem:
Given a binary tree, return its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

#### 💡 Logic & Approach:
- Use **Breadth-First Search (BFS)** to explore the tree level-by-level.
- Utilize a queue to store nodes along with their depth.
- As soon as a leaf node is encountered, return its depth (first found = minimum).

#### 📌 Concepts Used:
- Binary Tree Traversal (BFS)
- Queue Data Structure
- Early Exit Optimization

---

### 2. 📊 Number of Subarrays With LCM Equal to K (LeetCode 2470)

🔗 https://leetcode.com/problems/number-of-subarrays-with-lcm-equal-to-k/description/

- **Category**: Arrays | Medium  
- **Filename**: `number-of-subarrays-with-lcm-equal-to-k.c`

#### 🧠 Problem:
Given an integer array `nums` and an integer `k`, return the number of subarrays whose Least Common Multiple (LCM) is equal to `k`.

#### 💡 Logic & Approach:
- Use nested loops to iterate over all subarrays.
- Maintain current LCM incrementally as you move through the subarray.
- Use a helper function to compute LCM using the formula:
  \[
  \text{LCM}(a, b) = \frac{a \times b}{\text{GCD}(a, b)}
  \]
- Break early if current LCM exceeds `k`.
- Count the subarrays where LCM equals `k`.

#### 📌 Concepts Used:
- LCM and GCD computation
- Brute-force Subarray Generation
- Early Stopping Optimization
- Number Theory

---

## ✅ Summary:

| Problem | Category | Level | Concepts |
|--------|----------|--------|-----------|
| Minimum Depth of Binary Tree | Binary Tree | Easy | BFS, Queue, Early Exit |
| Number of Subarrays With LCM Equal to K | Arrays | Medium | LCM, GCD, Brute-force, Math Optimization |

---

## 🧠 Key Takeaways:

- Practiced **BFS traversal** to find the minimum depth efficiently in a binary tree.
- Learned to implement **LCM and GCD** in C for array problems.
- Optimized brute-force solutions using **early break conditions**.
- Applied both **tree traversal logic** and **mathematical reasoning** in one session.
