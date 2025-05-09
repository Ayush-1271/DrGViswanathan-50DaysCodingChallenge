# Day 10 – DrGVishwanathan 50 Days Coding Challenge

Welcome to Day 10 of the challenge! Today’s problems explore mathematical insight and linked list manipulation.

---

## 📘 Math Based Problem  
**Problem:** Bulb Switcher  
**LeetCode Link:** [https://leetcode.com/problems/bulb-switcher/description/](https://leetcode.com/problems/bulb-switcher/description/)

### ✅ Logic Used:
- A bulb is toggled in every round where the round number is a divisor of the bulb's position.
- Most numbers have divisors in pairs (e.g., 12 → (1,12), (2,6), etc.), resulting in **even toggles** → bulb turns off.
- **Perfect squares** have one unpaired divisor (e.g., 9 → (3,3)), resulting in **odd toggles** → bulb stays on.
- Hence, the bulbs that remain ON are at positions of perfect squares.
- The number of bulbs that remain ON = ⌊√n⌋

### 🧠 Concept Studied:
- Divisors and toggling behavior
- Properties of perfect squares
- Optimal solution with square root

---

## 🧮 DSA Based Problem  
**Problem:** Delete the Middle Node of a Linked List  
**LeetCode Link:** [https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/)

### ✅ Logic Used:
- Use two pointers: slow and fast.
- The **fast pointer** moves twice as fast as the **slow pointer**.
- When fast reaches the end, slow will be at the middle.
- Keep track of the node before `slow` to unlink and delete the middle node.

### 🧠 Concept Studied:
- Two-pointer technique (slow and fast)
- Edge case handling for single-node list
- Dynamic memory deallocation in C

---

## 📁 GitHub Repository
You can find the code and this README at the following path in the repository:  
[Day 10 – GitHub Folder](https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2010)

---

## 🎥 Video Explanation
Watch the explanation video here:  
[https://drive.google.com/file/d/10ng88dc_cwFXFWczrdjoQ4kiOAbAlpBc/view?usp=drive_link](https://drive.google.com/file/d/10ng88dc_cwFXFWczrdjoQ4kiOAbAlpBc/view?usp=drive_link)
