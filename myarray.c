#include<stdio.h>
#include "myarray.h"

int find_min_and_swap(int *a, int len)
{
    int j = 0; //location
    int m = a[0]; //min value

    for(int i=1; i<len; ++i)
    {
        if(a[i]<m) 
        {
            m = a[i];
            j = i;
        }
    }
    a[j] = a[0];
    a[0] = m;
    return 0;
}

int sort_array(int *a, int len)
{
    for(int i=0; i<len-1; ++i) 
    {
        find_min_and_swap(a+i, len-i);
    }
    return 0;
}

int print_array(int *a, int len)
{
    for (int i=0; i<len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}























