#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int a[], int b[])
{
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc !=3)
    {
        printf("Please input 2 numbers!\n");
        return 1;
    }

    int length1 = strlen(argv[1]);
    int *a = (int*)malloc(length1 * 4);
    for (int i=0; i<length1; ++i)
    {
        a[i] = argv[1][i]-'0';
        printf("a[%d]=%d\n", i, a[i]);
    }

    int length2 = strlen(argv[2]);
    int *b = (int*)malloc(length2 * 4);
    for (int i=0; i<length2; ++i)
    {
        b[i] = argv[2][i]-'0';
        printf("b[%d]=%d\n", i, b[i]);
    }
    printf("%d,%d\n", length1, length2);
    return 0;
}
