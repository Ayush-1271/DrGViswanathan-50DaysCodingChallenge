🧠 Dr. G. Vishwanathan 50 Days Coding Challenge – Day 16
📅 Day 16 Problems – Father's Day Challenge
🎥 Video Explanation:
https://drive.google.com/file/d/1WXKTLg-gV8R6SHLurVbSAD0rT46z8v7I/view?usp=sharing

🧩 Problem 1: Delete Node in a Linked List
🔗 Problem Link:
https://leetcode.com/problems/delete-node-in-a-linked-list/description/

✅ Problem Statement:
You are given a node in a singly linked list (not the tail). Your task is to delete that node from the list without access to the head pointer.

🧠 Logic Used:
Since we don’t have access to the previous node, we can’t perform traditional deletion.

Instead, we copy the value from the next node into the current node, and then bypass the next node.

Finally, we free the memory of the skipped node to avoid memory leaks.

💡 Concepts Applied:
Pointer manipulation in singly linked lists

In-place modification of data structures

Memory management in C

🎯 What I Learned:
How to handle deletion when access is restricted.

Clever use of overwriting data to simulate deletion.

Safe memory freeing practices in C.

🧩 Problem 2: Sum of Square Numbers
🔗 Problem Link:
https://leetcode.com/problems/sum-of-square-numbers/description/

✅ Problem Statement:
Given a non-negative integer c, determine whether there exist two integers a and b such that:
a² + b² = c

🧠 Logic Used:
Applied a two-pointer approach starting from a = 0 and b = sqrt(c).

If a² + b² < c, move a forward.

If a² + b² > c, move b backward.

If equal, we’ve found a valid pair.

Used long long to prevent integer overflow.

💡 Concepts Applied:
Mathematical optimization using square root

Two-pointer technique

Typecasting and overflow prevention

🎯 What I Learned:
Importance of optimizing brute-force problems.

Realized how mathematical intuition speeds up coding solutions.

Understood the critical role of choosing the correct data types.

