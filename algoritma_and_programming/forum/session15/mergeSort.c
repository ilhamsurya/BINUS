/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int left, int right);
void merge(int arr[], int leftIndex, int middleIndex, int rightIndex);
void print(int arr[], int size);

int main()
{
    int arr[] = {90, 2, 34, 102, 56, 1, 78, 22, 39, 44, 82, 51, 20, 66, 74, 13, 27, 64, 7, 34, 98, 4, 12, 3 };
    int length = sizeof(arr) / sizeof(arr[0]);
 
    printf("Sebelum Sort \n");
    print(arr, length);
 
    mergeSort(arr, 0, length - 1);
 
    printf("\nSesudah Sort\n");
    print(arr, length);
    return 0;
}
 
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
void print(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
