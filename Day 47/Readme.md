# Day 47 - Coding Practice

[📹 Video Explanation](https://drive.google.com/file/d/1dmddxbjojlJv_81QnB5sK92bVl3rm3nP/view?usp=sharing)

## 🎯 Problems Solved

### 1. Number of Substrings Containing All Three Characters
**File:** `number-of-substrings-containing-all-three-characters.c`

#### Problem Statement
Given a string containing only characters 'a', 'b', and 'c', find the number of substrings that contain at least one occurrence of all three characters.

#### Logic & Approach
- **Sliding Window Technique** with two pointers (`left` and `right`)
- Expand window by moving `right` pointer and count character frequencies
- When all three characters are present in current window:
  - All substrings from current `left` position to end of string are valid
  - Add `(n - right)` to result count
  - Shrink window from left to find other valid combinations

#### Key Insight
Once we have a valid substring containing all three characters, extending it to the right maintains validity. This allows us to count multiple substrings efficiently without generating them.

#### Concepts Used
- **Sliding Window Pattern**
- **Two Pointers Technique**
- **Character Frequency Counting**
- **Greedy Algorithm**

#### Time Complexity: O(n)
#### Space Complexity: O(1)

---

### 2. Number of 1 Bits (Hamming Weight)
**File:** `number-of-1-bits.c`

#### Problem Statement
Count the number of set bits (1s) in the binary representation of a given integer.

#### Logic & Approach
- **Brian Kernighan's Algorithm**
- Use bit manipulation: `n &= (n-1)` clears the lowest set bit
- Continue until all bits are cleared (`n == 0`)
- Count iterations to get total number of 1 bits

#### Key Insight
The operation `n & (n-1)` efficiently removes the rightmost set bit. This is faster than checking each bit position individually.

#### Example
```
n = 12 (1100 in binary)
Iteration 1: 1100 & 1011 = 1000 (count = 1)
Iteration 2: 1000 & 0111 = 0000 (count = 2)
Result: 2 set bits
```

#### Concepts Used
- **Bit Manipulation**
- **Brian Kernighan's Algorithm**
- **Bitwise AND Operation**
- **Binary Number System**

#### Time Complexity: O(number of set bits)
#### Space Complexity: O(1)

---

## 🔑 Key Learning Points

- **Sliding Window**: Powerful technique for substring/subarray problems
- **Bit Manipulation**: Efficient algorithms for binary operations
- **Two Pointers**: Reduces time complexity in array/string problems
- **Greedy Approach**: Making locally optimal choices for global optimization

## 📊 Problem Difficulty
- **Substrings Problem**: Medium
- **Hamming Weight**: Easy
