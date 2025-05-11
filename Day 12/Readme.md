# 🚀 Day 12 - 50 Days Coding Challenge

> Dedicated to all the mothers — Happy Mother's Day ❤️

## 📌 Problems Solved:
1. Count Odd Numbers in an Interval Range (Math-based)
2. Insert Greatest Common Divisors in Linked List (DSA-based)

---

## 🧮 Problem 1: Count Odd Numbers in an Interval Range

🔗 Problem Link:  
https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/

### 🧠 Logic & Explanation:
Given a range `[low, high]`, we need to count how many **odd numbers** exist within this interval.

#### ✅ Key Insight:
- Every two consecutive numbers (even and odd) form a pair.
- So, `(high - low) / 2` gives the count of odds if the bounds are both even.
- If **either** `low` or `high` is **odd**, we need to **add 1**.

### ✅ Formula Used:
(high - low) / 2 + (low % 2 == 1 || high % 2 == 1 ? 1 : 0)

### 🧩 Example:
- Input: `low = 3`, `high = 7`
- Odd numbers: 3, 5, 7 → Output: `3`

### 📚 Concepts Studied:
- Odd/Even Number Properties
- Arithmetic Optimization
- Pattern-based Math Problem Solving

---

## 🔗 Problem 2: Insert Greatest Common Divisors in Linked List

🔗 Problem Link:  
https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/

### 🧠 Logic & Explanation:
Given a singly linked list, we must **insert a new node** between each pair of adjacent nodes. The inserted node should contain the **GCD (Greatest Common Divisor)** of the two adjacent node values.

### 🧾 Steps:
1. Traverse the list using a pointer.
2. For every pair of adjacent nodes, calculate the GCD of their values.
3. Create a new node with this GCD and insert it between them.
4. Move two steps forward.

### 🔧 GCD Function (Euclidean Algorithm):

while (b != 0) {
  int temp = b;
  b = a % b;
  a = temp;
}
return a;

### 🧩 Example:
- Input: `18 → 6 → 9`
- Output: `18 → 6 → 6 → 3 → 9`  
(GCD of 18 and 6 is 6, GCD of 6 and 9 is 3)

### 📚 Concepts Studied:
- GCD using Euclidean Algorithm
- Linked List Manipulation
- Node Insertion Techniques
- Memory Allocation in C

---

## 📽️ Video Explanation:
🎥 https://drive.google.com/file/d/1qf-9y1WIMhZUCwVvv_368F_byRHsZ-p0/view?usp=drive_link

---

## 🔖 Tags:
**#DrGVishwanathan #50DaysCodingChallenge #VITBhopal #LeetCode**
