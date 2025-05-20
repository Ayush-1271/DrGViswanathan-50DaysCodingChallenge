# 🚀 Dr. G. Vishwanathan 50 Days Coding Challenge – Day 21

### 📅 Theme of the Day  
**Father’s Day & Women in Aerospace Day**  
Celebrating support, dedication, and the power of breaking barriers — with code!

---

## 🎥 Video Explanation  
https://drive.google.com/file/d/1xTIVZ04hW94be8zHp04YYw7A5M9s7TOo/view?usp=drive_link

## 📁 Repository Link  
https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2021

---

## ✅ Problem 1: Pascal’s Triangle II  
**LeetCode Link:**  
https://leetcode.com/problems/pascals-triangle-ii/description/

### 🔍 Problem Statement
Given a non-negative index `rowIndex`, return the **rowIndex-th row** of Pascal's Triangle (0-indexed).

### 💡 Logic
- Initialize an array of size `rowIndex + 1` with all values as 0.
- Set the first element as `1`.
- Iterate from row 1 to `rowIndex`, and for each row, update values from right to left using the formula:

row[j] = row[j] + row[j - 1];


### 📘 Concepts Used
- **Dynamic Programming**
- **Combinatorics**
- **Space Optimization** using a single array
- Efficient **bottom-up approach**

---

## ✅ Problem 2: Valid Parenthesis String  
**LeetCode Link:**  
https://leetcode.com/problems/valid-parenthesis-string/description/

### 🔍 Problem Statement
Given a string `s` containing only `'('`, `')'`, and `'*'`, determine if it is a valid parenthesis string where:
- `*` can represent `'('`, `')'`, or an empty string.

### 💡 Logic
- Use two counters `low` and `high`:
- `low` = minimum possible number of open brackets
- `high` = maximum possible number of open brackets
- Iterate through the string:
- If `'('`, increment both `low` and `high`
- If `')'`, decrement both
- If `'*'`, decrement `low` and increment `high` (flexible)
- If at any point `high < 0`, it's invalid
- After the loop, if `low == 0`, the string is valid

### 📘 Concepts Used
- **Greedy Algorithm**
- **Range Tracking Simulation**
- **Flexible wildcard handling**
- **Edge case management**

---

## 🧠 Key Takeaways
- Practiced **optimized combinatorics** without building the full triangle
- Solved **greedy simulation** for string validation
- Improved edge-case thinking and **interview-style explanation**
- Enhanced logical reasoning by exploring multiple interpretations of a symbol

---

## 🙌 Final Thoughts
Success is built on consistency.  
Celebrate milestones like a **father's support** and **aerospace achievements** — by mastering logic, one line of code at a time.

