# Day 24 – Dr. G. Viswanathan 50 Days Coding Challenge

📹 **Video Explanation**  
https://drive.google.com/file/d/1_ArXub8sXSjyLgBVNWs5SYgHnEaxsv5z/view?usp=sharing

---

## 🧠 Problems Covered

### 1. [Basic Calculator](https://leetcode.com/problems/basic-calculator/description/)
**Filename:** `basic-calculator.c`

#### 🔍 Problem Statement
Evaluate a simple mathematical expression string containing non-negative integers, `+`, `-`, parentheses `(` and `)`, and spaces.

#### 💡 Logic and Approach
- Traverse the expression character-by-character.
- Use a **stack** to store intermediate results and signs when encountering `'('`.
- Maintain a **sign** variable (`+1` or `-1`) to apply the arithmetic operator to the next number.
- When a number is encountered, read the full number and add it to the result with the current sign.
- On encountering `')'`, pop the sign and previous result from the stack and combine it with the current result.

#### 📚 Concept Used
- **Stack-based Expression Evaluation**
- **Character Parsing**
- **Operator Precedence via Grouping (Parentheses)**

---

### 2. [Move Zeroes](https://leetcode.com/problems/move-zeroes/description/)
**Filename:** `move-zeroes.c`

#### 🔍 Problem Statement
Move all `0`s to the end of the array while maintaining the relative order of the non-zero elements. Perform the operation **in-place**.

#### 💡 Logic and Approach
- Use a pointer (`insertPos`) to track the position to insert the next non-zero element.
- Traverse the array:
  - For every non-zero element, place it at `insertPos` and increment `insertPos`.
- After all non-zero elements are placed, fill the rest of the array with zeroes.

#### 📚 Concept Used
- **Two-pointer Technique**
- **In-place Array Manipulation**
- **Efficient Traversal**

---

## ✅ Summary

| Problem            | Technique Used                | Concept Mastered              |
|--------------------|-------------------------------|-------------------------------|
| Basic Calculator   | Stack for Expression Parsing  | Sign management, parentheses  |
| Move Zeroes        | Two-pointer approach           | In-place array manipulation   |

---
