🚀 Day 16 – Dr. G. Vishwanathan 50 Days Coding Challenge
🔗 Video Explanation
🎥 https://drive.google.com/file/d/1WXKTLg-gV8R6SHLurVbSAD0rT46z8v7I/view?usp=sharing

🧠 Problem 1: Delete Node in a Linked List
📌 Leetcode: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

🔍 Problem Summary:
You are given a node from a singly linked list — not the head — and are required to delete that node from the list.

💡 Concept Used:
Linked List In-Place Update: Since we don’t have access to the head of the list or the previous node, we can’t adjust pointers the usual way.

Instead, we:

Copy the value from the next node to the current node.

Skip the next node by adjusting the next pointer.

Free the memory of the skipped node to avoid memory leaks.

🎯 Key Learning:
This problem emphasizes pointer manipulation and memory handling in C, and challenges us to work around limited node access. It tests the ability to think differently when traditional traversal is not allowed.

🔢 Problem 2: Sum of Square Numbers
📌 Leetcode: https://leetcode.com/problems/sum-of-square-numbers/description/

🔍 Problem Summary:
Given a non-negative integer c, determine if it can be expressed as the sum of squares of two integers a and b such that:
a² + b² = c.

💡 Concept Used:
Two-Pointer Technique:

One pointer starts from a = 0.

The other starts from b = sqrt(c).

We check a² + b² and adjust a or b based on whether the sum is less than or greater than c.

Mathematical Intuition: Recognizing the nature of square numbers and efficient bounding using sqrt(c).

🎯 Key Learning:
This problem offers a great exercise in combining mathematical reasoning with algorithmic optimization. It reinforces the application of the two-pointer pattern to problems rooted in number theory.

✅ Both problems helped reinforce core concepts in C programming, memory management, mathematical logic, and efficient algorithmic thinking.

📁 All solutions are available in their respective .c files in this GitHub directory:
https://github.com/Ayush-1271/DrGViswanathan-50DaysCodingChallenge/tree/main/Day%2016

#KeepCoding #LinkedLists #TwoPointers #MathInProgramming #LeetcodeChallenge #CProgramming #LearningByDoing #DrGVishwanathan50DaysCodingChallenge #Day16
