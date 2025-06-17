# Day 49: Prime Counting & Single Number Problems

## Father's Day Challenge

This repository contains solutions for the Day 49 problems from the Father's Day Challenge, as shared by the Placement Office at VIT Bhopal.

- **Count Primes** (LeetCode 204): [LeetCode Link](https://leetcode.com/problems/count-primes/)
- **Single Number** (LeetCode 136): [LeetCode Link](https://leetcode.com/problems/single-number/)

## Video Explanation

[Video Link - to be pasted]()

---

## 1. count-primes.c

### Problem

Given an integer `n`, return the number of prime numbers that are strictly less than `n`.

- **Example:**  
  Input: `n = 10`  
  Output: `4`  
  Explanation: Primes less than 10 are 2, 3, 5, 7.

- **LeetCode Problem:** [Count Primes (204)](https://leetcode.com/problems/count-primes/)

### Logic

- If `n <= 2`, there are no primes less than `n`.
- Use a boolean array to mark numbers as prime or not.
- Iterate from 2 up to the square root of `n`, marking multiples of each prime as not prime.
- Count the numbers still marked as prime.

### Concept Used

- **Sieve of Eratosthenes:**  
  An efficient algorithm to find all primes less than a given number.  
  - Time Complexity: O(n log log n)
  - Space Complexity: O(n)
- **Memory Management:**  
  Dynamically allocates and frees memory for the boolean array.

---

## 2. single-number.c

### Problem

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

- **Example:**  
  Input: `nums = [4,1,2,1,2]`  
  Output: `4`

- **LeetCode Problem:** [Single Number (136)](https://leetcode.com/problems/single-number/)

### Logic

- Initialize a result variable to 0.
- XOR every number in the array with the result.
- All numbers that appear twice cancel each other out, leaving the unique number.

### Concept Used

- **Bit Manipulation (XOR):**  
  - `a ^ a = 0` and `a ^ 0 = a`
  - XOR is commutative and associative.
  - Efficiently finds the unique element in linear time and constant space.
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## File Links

- [count-primes.c](./count-primes.c)
- [single-number.c](./single-number.c)

---