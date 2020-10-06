#include<stdio.h>
void bubblesort(int A[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
}
int partition(int A[], int start, int end) {
    int pivot = A[end];
    int partitionindex = start;
    for (int i = start; i < end; i++) {
        if (A[i] <= pivot) {
            int temp = A[i];
            A[i] = A[partitionindex];
            A[partitionindex] = temp;
            partitionindex++;
        }
    }
    int temp = A[partitionindex];
    A[partitionindex] = A[end];
    A[end] = temp;
    return partitionindex;

}

void quicksort(int A[], int start, int end) {
    if (start < end) {
        int partitionindex = partition(A, start, end);
        quicksort(A, start, partitionindex - 1);
        quicksort(A, partitionindex + 1, end);
    }
}

int main()
{
    int A[30], N, choice;
    printf("Enter number of elements");
    scanf("%d", &N);
    printf("\nEnter elements");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    printf("\n Choose your method number of sorting\n");
    printf("\n 1--->Bubble sort \n");
    printf("\n 2--->Quick sort \n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:bubblesort(A, N);
    case 2:quicksort(A, 0, N - 1);
    }
    printf("\nThe sorted array is:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
}