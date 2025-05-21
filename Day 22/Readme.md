# Day 22 - DrGVishwanathan 50 Days Coding Challenge

## 📅 Theme: Father's Day & Transatlantic Flight Tribute  
This day honors the persistence of Charles Lindbergh, who made the first nonstop solo transatlantic flight in 1927. Similarly, we solved problems that tested precision and logic in dealing with parentheses and majority patterns in arrays.

---

## 🔗 Video Explanation

🎥 Watch the solution walkthrough:  
https://drive.google.com/file/d/1fsZnfvDERJ0tGvmIvcRfcPd5nrkRveRr/view?usp=drive_link

---

## 🧠 Problem 1: Minimum Remove to Make Valid Parentheses

🔹 **LeetCode Link**:  
https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/

### 🔍 Problem Statement

Given a string containing `'('`, `')'`, and lowercase letters, remove the minimum number of parentheses to make the input string valid. Return the resulting string.

---

### 🧩 Concepts Used

- **Stack-based parsing**
- **Greedy removal of unmatched parentheses**
- **Boolean array for marking characters**
- **String reconstruction**

---

### 🧠 Logic

1. Traverse the string:
   - If `'('` is found, push its index onto the stack.
   - If `')'` is found:
     - Pop the stack if it contains a `'('` (valid match).
     - Else, mark this index for removal as it is unmatched.
2. After traversal, any remaining `'('` in the stack are unmatched and should be removed.
3. Build a result string by skipping all marked indices.

---

### 📂 File: `minimum-remove-to-make-valid-parentheses.c`  
✅ Code is available in the GitHub repo under the above filename.

---

## 🧠 Problem 2: Majority Element

🔹 **LeetCode Link**:  
https://leetcode.com/problems/majority-element/description/

### 🔍 Problem Statement

Given an array of size `n`, return the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

---

### 🧩 Concepts Used

- **Boyer-Moore Voting Algorithm**
- **Greedy voting**
- **Single-pass linear scan**

---

### 🧠 Logic

1. Initialize `count` to `0` and `candidate` to `0`.
2. Traverse the array:
   - If `count == 0`, set current element as the `candidate`.
   - If current element equals `candidate`, increment `count`.
   - Else, decrement `count`.
3. Return the final `candidate`, which is guaranteed to be the majority element.

---

### 📂 File: `majority-element.c`  
✅ Code is available in the GitHub repo under the above filename.

---

## 📁 Repository Link

🔗 GitHub Repository:  
https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2022
