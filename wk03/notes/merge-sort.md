# Merge sort pseudocode

If only one number
    Return
Else
    Sort left half of number
    Sort right half of number
    Merge sorted halves


MergeSort(arr[], 1, r)
If r > 1
    1. Find the middle point to divide the array into two halves:
        middle m = 1 + (r-1)/2
    2. Call mergeSort for first half:
        Call mergeSort(arr, 1, m)
    3. Call mergeSort for second half:
        Call mergeSort(arr, m+1, r)
    4. Merge the two halves sorted in step 2 and 3:
        Call merge(arr, 1, m, r)