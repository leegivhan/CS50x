# The Collatz conjecture pseudocode

Illustration of multiple recursive cases.

The collatz conjecture applies to positive integers and speculates that it is always possible to get "back to 1" if you follow these steps:
    - If n is 1, stop. Return 0
    - Otherwise, if n is even, repeat this process on n/2. (recursive) return 1 + addtl steps.
    - Otherwise, if n is odd, repeat this process on 3n + 1. (recursive)

Write a recursive function collatz(n) that calculates how many steps it takes to get to 1 if you start from n and recurse as indicated above.

Examples
-----
n = 1
collatz(n) = 0
Steps: 1 (1)
-----
n = 2
collatz(n) = 1
Steps: 2 -> 1 (2)
-----
n = 3
collatz(n) = 7
Steps: 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
-----
n = 4
collatz(n) = 2
Steps: 4 -> 2 -> 1
