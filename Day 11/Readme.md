# Day 11 – Dr. G. Vishwanathan 50 Days Coding Challenge

Welcome to Day 11 of the #DrGVishwanathan #50DaysCodingChallenge organized by #VITBhopal. Today, we tackled a mathematically elegant problem involving factorials and a classic linked list operation. Each of these helps strengthen our analytical thinking and pointer manipulation skills.

---

## 🧮 Problem 1: [Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/description/)

### 🔍 Problem Insight:
The challenge asks us to determine the number of trailing zeroes in the factorial of a number `n`. Trailing zeroes are created by multiples of 10, and since 10 = 2 × 5, and there are always more 2s than 5s, we count how many times 5 appears as a factor in numbers up to `n`.

### 📘 Concept Studied:
- **Prime factorization**: Understanding how trailing zeroes form.
- **Mathematical patterns**: Repeated division and accumulation to count contributing factors.
- **Time optimization**: Avoids direct factorial computation for large `n`, which is infeasible.

### 🧠 Logic Used:
We keep dividing `n` by 5 and accumulate the quotients. This approach elegantly counts how many 5s are factors in the factorial, including higher powers of 5 like 25, 125, etc.

---

## 🔗 Problem 2: [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)

### 🔍 Problem Insight:
The task is to remove the `n`th node from the end of a singly linked list. This must be done in one pass, making it a great exercise in pointer manipulation.

### 📘 Concept Studied:
- **Two-pointer technique**: Also known as the fast and slow pointer approach.
- **Dummy node** usage to simplify edge cases (e.g., removing the first node).
- **Memory management**: Correctly freeing memory for deleted nodes in C.

### 🧠 Logic Used:
A dummy node is created before the head to handle edge cases. Two pointers are moved with an `n + 1` gap. When the fast pointer reaches the end, the slow pointer will be just before the node to remove. This ensures a clean one-pass solution.

---

🎥 **Video Explanation**:  
[Watch Day 11 Video](https://drive.google.com/file/d/14nNL7SHpv3dUdTVfFBQAgZhNm3y7vILg/view?usp=drive_link)

---

### 📝 Summary:
- Today's problems show how mathematical insight and algorithmic techniques can simplify seemingly complex problems.
- Efficient thinking and pattern recognition are key to becoming a better problem solver.
- Every day brings new clarity. Stay curious and consistent.

---
