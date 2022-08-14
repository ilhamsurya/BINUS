#include <stdio.h>
  
void bubbleSort(int arr[], int n);
void swap(int* num1, int* num2);
void print(int arr[], int size);

int main()
{
    int arr[] = { 10, 4, 7, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sebelum Sort \n");
    print(arr, n);
    bubbleSort(arr, n);
    printf("Sesudah Sort \n");
    print(arr, n);
    return 0;
}

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
  
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
  
void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}