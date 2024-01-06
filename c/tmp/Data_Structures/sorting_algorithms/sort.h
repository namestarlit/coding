#ifndef __SORT_H__
#define __SORT_H__

/* sort functions prototypes */
void bubble_sort(int *arr, int n);
void insertion_sort(int *arr, int n);
int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);
void merge(int arr[], int beg, int mid, int end);
void merge_sort(int arr[], int beg, int end);

#endif /* __SORT_H__ */
