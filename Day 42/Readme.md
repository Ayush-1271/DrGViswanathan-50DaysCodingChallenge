# Day 42 - Validate BST & Reverse Words in a String

🎥 **Video Explanation**:  
https://drive.google.com/file/d/15MNVoYyav9eMTcQlFDqllwT3BNhmTM25/view?usp=sharing

## ✅ Problem 1: Validate Binary Search Tree

- **LeetCode Link**: https://leetcode.com/problems/validate-binary-search-tree/
- **File**: `validate-BST.c`
- **Category**: Binary Search Tree – Medium

### 🔍 Problem Statement
Given a binary tree, determine if it is a valid binary search tree (BST). A BST is valid if for every node, all nodes in the left subtree are smaller, and all nodes in the right subtree are larger.

### 🧠 Logic & Approach
- We use recursion with range validation.
- For each node, we pass the allowed lower and upper bounds.
- If the node value is outside these bounds, it violates the BST property.

### 📚 Concepts Used
- Recursion
- Tree traversal
- Validating BST properties using `lower < node < upper`
- Edge case handling with `LLONG_MIN` and `LLONG_MAX` for 32-bit/64-bit safety

---

## ✅ Problem 2: Reverse Words in a String

- **LeetCode Link**: https://leetcode.com/problems/reverse-words-in-a-string/
- **File**: `reverse-words-in-a-string.c`
- **Category**: Strings – Medium

### 🔍 Problem Statement
Given a string `s`, reverse the order of the words. Words are separated by spaces, and there can be leading, trailing, or multiple spaces between words.

### 🧠 Logic & Approach
1. **Trim and Normalize**:
   - Skip leading spaces.
   - Replace multiple spaces with a single one.
   - Remove trailing spaces.

2. **Tokenize the String**:
   - Use `strtok()` to split the string into words.

3. **Rebuild in Reverse Order**:
   - Concatenate words in reverse sequence to form the final output.

### 📚 Concepts Used
- String manipulation in C
- Handling multiple and trailing spaces
- Tokenization with `strtok()`
- Memory management with `malloc()` and `free()`

---
