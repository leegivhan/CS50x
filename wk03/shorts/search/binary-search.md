# Binary search

Pseudocode:

Repeat until the (sub)array is of size 0:
    Calculate the middle point of the current (sub)array.
    If the target is at the middle, stop and return that element.
    Else if the target is less than what's at the middle, repeat, changing the end point to be just to the left of the middle.
    Otherwise, if the target is greater than what's at the middle, repeat, changing the start point to be just to the right of the middle. 