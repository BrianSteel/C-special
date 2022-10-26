//C implementation QuickSort
#include<stdio.h>

void swap(int* a, int* b);
int arrange (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);



int main()
{
    int arr[] = {1, 5, 7, 8, 9, 10};
               //0   1  2  3  4  5
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}


// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


/* This function takes last element as pivot, places
all smaller (smaller than pivot) to left of pivot and
all greater elements to right of pivot and places the
pivot element at its correct position in sorted array*/


int arrange (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot 5
    int i = (low - 1);  // Index of smaller element i=-1

    for (int j = low; j <= high- 1; j++)
    {
        //if the taken element is lower than or equal to pivot 5 increment i and swap.
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);//here pivot is placed at the right position, but quicksort may not be finished.
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array for sorting,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is arranging index, arr[p] is now
           at right place */
        int ai = arrange(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, ai - 1);//used when pivot is not lowest and can be up to less than highest.//check.
        quickSort(arr, ai + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

