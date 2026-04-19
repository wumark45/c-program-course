#include <stdio.h>
#include <stdlib.h>

void print2(int *arr, int n, int factor)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 ==0) break;
        if (i % 2 == 1)
        {
            printf("%d ", arr[i]*factor);
        }
    }
    printf("\n");
}
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input some integers:\n");
        return 1;
    }
    int n = argc - 1;


    int *arr = (int *) malloc(4 * n);
    
    for (int i=0; i<n; ++i)
    {
        arr[i] = atoi(argv[i+1]);
    }
    print2(arr, n, 1);
    return 0;
}
