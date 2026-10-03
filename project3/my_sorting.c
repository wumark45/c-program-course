#include<stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int min_idx(int *arr, int start, int len)
{
    int min_num = arr[start];
    int idx = start;
    for (int i = start; i < start + len; ++i)
    {
        if (arr[i] < min_num)
        {
            min_num = arr[i];
            idx = i;
        }
    }
    return idx;
}

void bubble_sort(int *arr, int len)
{
    for (int j = 0; j < len; ++j)
    {
        int i = min_idx(arr, j, len - j);
        swap(&arr[j], &arr[i]);
    }
}

void sweep(int *arr, int len)
{
    for(int i=0; i<len-1; ++i)
    {
        if (arr[i] > arr[i+1])
        {
            swap(&arr[i], &arr[i+1]);
        }
    }
}
 
void exchange_sort(int *arr, int len)
{
    for (int j=0; j < len-1; j++)
    {
        sweep(arr, len-j);
    }
}
