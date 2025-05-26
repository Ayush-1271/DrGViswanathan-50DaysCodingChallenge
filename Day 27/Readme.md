# Day 27 – DrGViswanathan 50 Days Coding Challenge

🎥 **Video Explanation**:  
https://drive.google.com/file/d/1GYerzKp_vrZ0XErWjmlX7pdCHi8OH5VL/view?usp=drive_link

---

## 🧩 Problem 1: Path Sum  
**LeetCode Link**: https://leetcode.com/problems/path-sum/description/  
**Filename**: `path-sum.c`

### ✅ Problem Statement
Given the root of a binary tree and an integer `targetSum`, return `true` if the tree has a **root-to-leaf path** such that adding up all the values along the path equals `targetSum`.

### 💡 Logic
- If the current node is `NULL`, return `false`.
- If it’s a leaf node (i.e., no left or right child), check if its value equals `targetSum`.
- Otherwise, subtract the current node's value from `targetSum` and recursively check the left and right subtrees.

### 📚 Concept Used
- **Binary Tree Traversal** (DFS – Depth-First Search)
- **Recursive Tree Path Validation**
- **Base and Terminal Case Handling** in recursion

---

## 🧩 Problem 2: Maximum Subarray  
**LeetCode Link**: https://leetcode.com/problems/maximum-subarray/description/  
**Filename**: `maximum-subarray.c`

### ✅ Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

### 💡 Logic
- Initialize `max_sum` and `current_sum` with the first element.
- Traverse through the array starting from index 1:
  - For each element, update `current_sum` as the maximum of the current element or `current_sum + element`.
  - Update `max_sum` if `current_sum` is greater than the previous `max_sum`.

### 📚 Concept Used
- **Kadane’s Algorithm** – A dynamic programming technique to compute the maximum sum of a subarray in linear time `O(n)`.
- Efficient in space and time, maintaining only two variables.

---

### 🔁 Summary

| File | Problem | Concept |
|------|---------|---------|
| `path-sum.c` | Check for a root-to-leaf path that sums to a target value | Recursion, DFS, Binary Trees |
| `maximum-subarray.c` | Find the maximum sum of a contiguous subarray | Kadane’s Algorithm, Dynamic Programming |
