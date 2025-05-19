# Day 20 - Dr. G. Vishwanathan 50 Days Coding Challenge

## 📅 Theme: Father's Day & Plant Something Day  
A day of nurturing and growth — reflected in our focus on foundational Data Structures and Algorithmic concepts. The problems today emphasized computational thinking and clean logic.

🎥 **Video Explanation:**  
https://drive.google.com/file/d/1s0Brp-8wnHma210cJNMlWRv0l1eszZRr/view?usp=drive_link

---

## ✅ Problem 1: Evaluate Reverse Polish Notation

🔗 **LeetCode Link:**  
https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

### 🔍 Problem Statement:
You are given an array of strings `tokens` that represent an arithmetic expression in Reverse Polish Notation (RPN). Evaluate the expression and return the result.

### 💡 Logic:
- Use a **stack** to simulate the evaluation process.
- Traverse the `tokens` array:
  - If the token is a number, convert it and push to stack.
  - If it's an operator (`+`, `-`, `*`, `/`), pop the top two elements, apply the operation, and push the result back.
- The final result will be on the top of the stack.

### 🧠 Concepts Used:
- **Stack Data Structure**
- **String to Integer Conversion (`atoi`)**
- **Postfix Expression Evaluation**
- **Integer Arithmetic (with truncation toward zero)**

---

## ✅ Problem 2: Find Greatest Common Divisor of Array

🔗 **LeetCode Link:**  
https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/

### 🔍 Problem Statement:
You are given an integer array `nums`. Find the greatest common divisor (GCD) of the smallest and largest numbers in the array.

### 💡 Logic:
- Traverse the array once to find the **minimum** and **maximum** values.
- Use the **Euclidean Algorithm** to compute the GCD of those two numbers.

### 🧠 Concepts Used:
- **Basic Array Traversal**
- **Finding Min and Max Values**
- **Mathematics: Euclidean Algorithm for GCD**

---

## 📁 Files in This Folder:
- `evaluate-reverse-polish-notation.c`
- `find-greatest-common-divisor-of-array.c`

Each file includes the corresponding logic implemented in C as per the problem descriptions.

---

🌱 Let this challenge be a reminder — just like planting a seed or honoring a father's legacy, consistent efforts in DSA will lead to long-term growth.

