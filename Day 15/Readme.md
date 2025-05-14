Day 15 – Dr. G. Viswanathan 50 Days Coding Challenge
📌 Problems Covered:
🔠 Excel Sheet Column Title

Problem Statement:
Convert a given positive integer to its corresponding column title as it appears in an Excel sheet. For example, 1 → "A", 28 → "AB", etc.

Concept Used:
This problem is based on Base-26 conversion, where:

    Each digit corresponds to a letter from 'A' to 'Z'.

    Unlike typical base conversions, Excel columns are 1-indexed, meaning 'A' starts at 1, not 0. Hence, we adjust by subtracting 1 during computation.

Logic:

    While the number is greater than zero:

        Subtract 1 from the number.

        Get the modulo 26 and convert it into a character.

        Divide the number by 26.

    Reverse the resulting string since the characters are generated from least to most significant.

➕ Add Two Numbers

Problem Statement:
Given two non-empty linked lists representing two non-negative integers, where digits are stored in reverse order, add the two numbers and return the result as a linked list.

Concept Used:
This problem involves linked list traversal and carry-forward addition — just like how we manually add digits.

Logic:

    Traverse both linked lists simultaneously.

    At each step, add corresponding digits along with the carry from the previous step.

    Create a new node with sum % 10, and update carry as sum / 10.

    Continue until both lists and the carry are exhausted.

🎥 Video Explanation:
Watch the explanation here:
📹 https://drive.google.com/file/d/12fRW8bPZHJi45woyfOJnPcxn15Uau1Mk/view?usp=drive_link

🧠 These problems tested both math logic (with custom base conversion) and linked list mastery. Solving them helped reinforce memory-safe practices in C and improved understanding of number manipulation and list traversal.
