// C program for implementation of selection sort
// Copied from geeksforgeeks.org
#include <stdio.h>

// Functions defined
void swap(int *xp, int *yp); //Line 23
void selectionSort (int arr[], int n); // Line 31
void printArray(int arr[], int size); // Line 52

// Unsorted array
int arr[] = {64, 25, 12, 22, 11};

// Driver program to test above functions
int main(void)
{
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

void swap (int *xp, int *yp)
{
    // temporary placeholder for smaller number
    int temp = *xp;
    // swaps smaller number with bigger number
    *xp = *yp;
    // Swaps bigger number with smaller number
    *yp = temp;
}

void selectionSort (int arr[], int n)
{
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array
void printArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}