#include <stdio.h>

void print_array(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubble_sort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int check = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                check = 0;
            }
        }
        if (check)
        {
            break;
        }
    }
}

void insertion_sort(int *A, int n)
{
    for (int j = 1; j < n; j++)
    {
        int i = j - 1;
        int key = A[j];
        while (key < A[i] && i >= 0)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
}

void selection_sort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int i_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[i_min] > A[j])
            {
                i_min = j;
            }
        }
        int temp = A[i_min];
        A[i_min] = A[i];
        A[i] = temp;
    }
}

int main()
{
    int A[] = {13, 2, 66, 23, 7, 1};
    int n = sizeof(A) / sizeof(A[0]);
    print_array(A, n);
    bubble_sort(A, n);
    print_array(A, n);
    insertion_sort(A, n);
    print_array(A, n);
    selection_sort(A, n);
    print_array(A, n);
    // heapSort(A, n);
    // print_array(A, n);
    // quicksort(A, A[0], A[n - 1]);
    // print_array(A, n);
    // merge_sort(A[0], A[n - 1]);
    // print_array(A, n);
    return 0;
}
