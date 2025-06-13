# Day 45 - DrGViswanathan 50 Days Coding Challenge

📅 **Date**: Day 45  
🎥 **Video Explanation**: https://drive.google.com/file/d/1E9s-CfGMx9HedvXWtV5DYLJ4AEM6f8lE/view?usp=sharing  
📁 **GitHub Repository**: https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2045

---

## 🧩 Problem 1: Find the Town Judge

🔗 LeetCode Link: https://leetcode.com/problems/find-the-town-judge/

### ✅ Problem Statement:
You are given a list of trust relationships in a town. A town judge is someone who is trusted by everyone but trusts no one. Your task is to find out if such a person exists.

### 🧠 Logic:
- Maintain an array `trustScore` where:
  - For every person `a` who trusts someone, decrement `trustScore[a]`.
  - For every person `b` who is trusted, increment `trustScore[b]`.
- The town judge should have a `trustScore` of `n - 1` (trusted by everyone else, trusts none).

### 💡 Concept Used:
- **Graph-based trust relationships** using **in-degree and out-degree** concept.
- **Array manipulation** to track trust scores.

---

## 🧩 Problem 2: Greatest Common Divisor of Strings

🔗 LeetCode Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/

### ✅ Problem Statement:
Given two strings, find the largest string that can divide both (i.e., can be concatenated repeatedly to form both).

### 🧠 Logic:
- First check if `str1 + str2 == str2 + str1`. If not, no common divisor exists.
- If the condition holds, the GCD of the lengths of the two strings gives the length of the common pattern.
- Return the substring of that GCD length from `str1`.

### 💡 Concept Used:
- **String concatenation and comparison**
- **Euclidean Algorithm (GCD)**
- **Substring extraction**

---
