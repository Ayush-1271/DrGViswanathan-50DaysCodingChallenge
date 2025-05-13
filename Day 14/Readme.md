📅 Day 14 – Father's Day Challenge (May 13)

🎥 Video Walkthrough
🔗 https://drive.google.com/file/d/1efFSaNHlqnFy2rbacSnIjjfOW4e3gLqP/view?usp=drive_link
🧠 Problem 1: Reverse Integer

🔗 Problem Link: https://leetcode.com/problems/reverse-integer/description/
✅ Concepts Used

    Integer operations

    Overflow detection

    Modulo and division

    Edge case handling for 32-bit integers

🧩 Problem Summary

Given a signed 32-bit integer x, reverse its digits. If reversing x causes the value to go outside the signed 32-bit integer range [−2^31, 2^31 − 1], return 0.
🧠 Logic

    Extract the last digit using modulo (x % 10)

    Build the reversed number step by step

    Check for overflow/underflow before adding the digit:

        If reversed > INT_MAX / 10 or reversed == INT_MAX / 10 && digit > 7 → return 0

        If reversed < INT_MIN / 10 or reversed == INT_MIN / 10 && digit < -8 → return 0

This ensures we don't exceed the 32-bit integer limits.
🧠 Problem 2: Partition List

🔗 Problem Link: https://leetcode.com/problems/partition-list/description/
✅ Concepts Used

    Linked List traversal

    Dummy nodes technique

    Pointer manipulation

🧩 Problem Summary

Given the head of a linked list and an integer x, partition the list so that all nodes less than x come before nodes greater than or equal to x. The original relative order of the nodes in each partition should be preserved.
🧠 Logic

    Use two separate lists: one for values < x and one for values >= x.

    Traverse the original list:

        Append nodes to less or greater list based on value.

    Link the two lists by connecting the last node of less to the head of greater.

    Return the new head starting from less.

This strategy ensures that:

    The relative order of nodes is maintained.

    Memory usage is efficient (in-place without creating new nodes).

✅ Solutions for both problems are uploaded with file names:

    reverse-integer.c

    partition-list.c
