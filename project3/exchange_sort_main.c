#include <stdio.h>
#include "my_array.h"
#include "func.h"
#include "my_sorting.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Please input a filename.\n");
        return 1;
    }

    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 2;
    }

    char buf[1600];
    int arr[100];
    char *p = fgets(buf, 1600, fp);

    while (p != NULL)
    {
        int len = buf2arr(buf, arr);
        exchange_sort(arr, len);
        print_array(arr, len);
        p = fgets(buf, 1600, fp);
    }

    fclose(fp);
    return 0;
}
