#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target);

// Sorted array
int arr[] = { 2, 3, 4, 10, 40 };
// Number we are looking for
int target = 10;

int main(void)
{
    // determines length of array
    int array_length = sizeof(arr) / sizeof(arr[0]);

    /* high = array_length - 1 
    because element starts at 0 */
    int result = binarySearch(arr, 0, array_length - 1, target);
    (result == -1) ? printf("Element is not present in array.\n")
                   : printf("Element is present in index %d.\n", 
                            result);
    return 0;
}

/* A recursive binary search function. 
It returns location of x in given array 
arr[start_point..end_point] if it is present,
otherwise -1 */

int binarySearch(int arr[], int low, int high, int target)
{
    // If there are more than one elements in the array
    if (high >= 1)
    {
        // Calculate the middle point of the current (sub)array.
        int mid = low + (high - 1) / 2;

        /* If the target is at the middle, 
        stop and return that element. */
        if (arr[mid] == target)
            return mid;

        /* Else if the target is less than mid, repeat, 
        changing the end point to be just to the left of the middle. */
        if (arr[mid] > target)
            /* arguments are array, low point, high point and target
            why is low point 1? */
            return binarySearch(arr, 1, mid - 1, target);

        /* Else search right subarray 
        Where is the high coming from*/
        return binarySearch(arr, mid + 1, high, target);
    }
    /* We reach here when element is not present in array */
    return -1;
}