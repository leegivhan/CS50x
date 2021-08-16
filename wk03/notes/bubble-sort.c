#include <stdio.h>

void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

// Unsorted array
int arr[] = {64, 34, 25, 12, 22, 11, 90};

int main()
{
    
    // Determines size of array.
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)

        // last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}