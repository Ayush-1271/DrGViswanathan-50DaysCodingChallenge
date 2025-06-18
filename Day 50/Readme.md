# Break a Palindrome

## Problem Statement

Given a palindromic string of lowercase English letters, replace **exactly one character** with any lowercase English letter so that the resulting string is **not a palindrome** and is the **lexicographically smallest** one possible.

- Return the resulting string.
- If there is no way to replace a character to make it not a palindrome, return an empty string.

**Constraints:**
- `1 <= palindrome.length <= 1000`
- `palindrome` consists of only lowercase English letters.

**Example 1:**
- Input: `palindrome = "abccba"`
- Output: `"aaccba"`

**Example 2:**
- Input: `palindrome = "a"`
- Output: `""`

---

## Logic and Concept Used

### Logic

- If the length of the palindrome is 1, it is impossible to make it non-palindromic by changing one character, so return an empty string.
- For longer strings, to get the lexicographically smallest result:
  - Traverse the first half of the string.
  - Replace the first character that is not `'a'` with `'a'`.
  - If all characters in the first half are `'a'`, change the last character to `'b'`.

### Concept

- **Palindrome:** A string that reads the same backward as forward.
- **Lexicographical Order:** Similar to dictionary order; `'a'` is smaller than `'b'`, and so on.
- **Greedy Approach:** Always make the smallest possible change as early as possible to ensure the result is the smallest lexicographically.

---

## File Structure

- `break-a-palindrome.c`  
  Contains the implementation of the solution using the above logic.

---

## Video Explanation

[Video Link](https://drive.google.com/file/d/1T8e4EDFqJ_7Rzp3LTPiqi9ylNM1ZuieQ/view?usp=sharing)

---

## Summary

- **Problem:** Break a palindrome by changing one character to make it non-palindromic and lexicographically smallest.
- **Logic:** Change the first non-`'a'` character in the first half to `'a'`, or the last character to `'b'` if all are `'a'`.
- **Concepts Used:** Palindrome, lexicographical order, greedy algorithm.