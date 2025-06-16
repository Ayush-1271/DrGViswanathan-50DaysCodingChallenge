# Day 48: Bit Manipulation and GCD Problems

## Video Explanation

Watch the detailed explanation here:  
[https://drive.google.com/file/d/1m1BDx8OhK5z3wpCkDQZdocRLyWeIBy_-/view?usp=sharing](https://drive.google.com/file/d/1m1BDx8OhK5z3wpCkDQZdocRLyWeIBy_-/view?usp=sharing)

---

## 1. Hamming Distance (`hamming-distance.c`)

### Problem

Given two integers `x` and `y`, the task is to find the Hamming distance between them.  
The Hamming distance is defined as the number of positions at which the corresponding bits are different.

#### Example

- Input: `x = 1`, `y = 4`
- Output: `2`
- Explanation:  

1 = 0001
4 = 0100
Differ at two positions (bits 2 and 0)


### Logic & Concept Used

- **Bit Manipulation:**  
The XOR (`^`) operation is used to identify differing bits between `x` and `y`. Each `1` in the result represents a differing bit.
- **Counting Set Bits:**  
The number of `1`s in the XOR result is counted using bitwise operations, which gives the Hamming distance.

---

## 2. Check If It Is a Good Array (`check-if-it-is-a-good-array.c`)

### Problem

Given an array of integers, determine if it is a "good array".  
An array is considered good if it is possible to select some subset of its elements whose greatest common divisor (GCD) is 1.

#### Example

- Input: `[12, 5, 7, 23]`
- Output: `true`
- Explanation:  
The GCD of all elements can be reduced to 1 by selecting appropriate elements.

### Logic & Concept Used

- **Greatest Common Divisor (GCD):**  
The code uses the Euclidean algorithm to compute the GCD of the array elements.
- **Mathematical Insight:**  
If the GCD of the entire array is 1, then some subset of the array can be combined (using integer linear combinations) to form 1, making the array "good".
- **Early Termination:**  
The loop stops early if the GCD becomes 1, optimizing performance.

---

## Summary

- Both problems utilize fundamental concepts in computer science: **bit manipulation** and **number theory (GCD)**.
- The solutions are efficient and make use of classic algorithms and bitwise operations.
- Refer to the respective `.c` files for implementation details.