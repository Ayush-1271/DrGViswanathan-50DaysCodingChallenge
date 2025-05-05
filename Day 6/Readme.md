# 🚀 Day 6 - #DrGViswanathan 50 Days Coding Challenge

Welcome to Day 6 of the #DrGViswanathan challenge organized by **VIT Bhopal** in collaboration with **FACE Prep**. Today's problems help us sharpen skills in math-based logic and linked list manipulation.

---

## 📌 Problem 1: Happy Number
🔗 [LeetCode - Happy Number](https://leetcode.com/problems/happy-number/description/)

### ✅ Problem Statement:
A number is considered **happy** if, by repeatedly replacing it with the sum of the squares of its digits, we eventually arrive at 1. If the process loops endlessly in a cycle without reaching 1, the number is not happy.

### 🧠 Approach:
We use the **Floyd’s Cycle Detection Algorithm** (slow and fast pointer) to detect cycles:
- A helper function `getNext()` calculates the sum of the squares of digits.
- If during the process we hit a cycle (i.e., fast equals slow), it's not a happy number unless the value is 1.

### ⏱ Time Complexity:
- **O(log n)** per iteration (since digit extraction takes log n time)
- Efficient due to cycle detection.

### 📦 Space Complexity:
- **O(1)** (No extra data structures used for visited elements)

---

## 📌 Problem 2: Remove Linked List Elements
🔗 [LeetCode - Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/description/)

### ✅ Problem Statement:
Given a linked list, remove all elements that have a specific value.

### 🧠 Approach:
- We use a **dummy node** to handle edge cases like removal at the head.
- Traverse through the list and skip any node whose value equals the target.
- Free memory for removed nodes.

### ⏱ Time Complexity:
- **O(n)** — we visit each node once.

### 📦 Space Complexity:
- **O(1)** — in-place manipulation.

---

## 🎥 Video Explanation:
I’ve explained both problems and their approaches in this video:
👉 [Watch on Google Drive](https://drive.google.com/drive/folders/1SYS9VaelekpEfY_guaRgfukA2hNF2z9u?usp=sharing)

---

## 📂 Folder Structure:
