# Day 46 - Dr. G. Viswanathan 50 Days Coding Challenge

📅 **Penultimate Day** of the Challenge  
Today’s problems revolved around efficient graph identification and bit manipulation techniques. The aim was to use observations and optimized binary operations to solve both problems efficiently.

🎥 **Video Explanation**:  
https://drive.google.com/file/d/1aLRSh4kFj_P9hdTiBKP9MVoSGWCowei3/view?usp=sharing

---

## 🧠 Problem 1: [1791. Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/)

### ✅ Problem Statement:
You're given a star graph — a tree with one center node connected to all other nodes. Identify the center node using the edge list.

### 🔍 Logic:
- In a star graph, every node (except the center) is connected to only one other node.
- The center appears in **both of the first two edges**.
- By comparing the first two edges, we can identify the center in constant time.

### 🧩 Concepts Used:
- Graph Theory
- Star Graph Properties
- Simple Array Comparison

---

## 🧠 Problem 2: [762. Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/)

### ✅ Problem Statement:
Given two integers `left` and `right`, count how many numbers in the range have a **prime number of 1s (set bits)** in their binary representation.

### 🔍 Logic:
- Use **bit manipulation** to count set bits efficiently (Brian Kernighan’s Algorithm).
- Instead of calculating primes on the fly, we use a precomputed lookup array for primes up to 20 (as the maximum number of bits is 20).
- For each number in the range, count its set bits and check if the count is prime.

### 🧩 Concepts Used:
- Bit Manipulation
- Prime Number Identification
- Lookup Optimization
- Brian Kernighan's Algorithm for counting set bits

---
