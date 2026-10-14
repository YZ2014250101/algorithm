#pragma once
#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void m_insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int tmp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > tmp ) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}
void m_selection_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int index = i;
        int min = a[index];
        for (int j = i+1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                index = j;
            }
        }
        a[index] = a[i];
        a[i] = min;
    }
}
void m_shell_sort(int a[], int n) {
    for (int gap = n / 2; gap >= 1; gap /= 2) {
        for (int i = 0; i < gap; i++) {
            for (int j = i + gap; j < n; j += gap) {
                int tmp = a[j];
                int k = j - gap;
                while (k >= 0 && a[k] > tmp) {
                    a[k + gap] = a[k];
                    k -= gap;
                }
                a[k+gap] = tmp;
            }
        }
    }
}
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low;
    int j = high - 1;
    while (i <= j) {
        while (i <= j && a[i] <= pivot)
            i++;
        while (i <= j && a[j] > pivot)
            j--;
        if (i < j)
            swap(&a[i], &a[j]);
    }
    swap(&a[i], &a[high]);
    return i;
}
void m_quick_sort(int a[], int low, int high)
{
    if (low < high) {
        int pi = partition(a, low, high);
        cout << endl;
        printArray(a, high+1);
        m_quick_sort(a, low, pi - 1);
        m_quick_sort(a, pi + 1, high);
    }
}
void m_merge_sort(int a[], int n)
{
}
void m_heap_sort(int a[], int n)
{
}