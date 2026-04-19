#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input some integers:\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", atoi(argv[i]));
        }  
    }
    printf("\n");
    for (int i = 1; i < argc; i++)
    {
        if (i % 3 == 0)
        {
            int a = atoi(argv[i]) * 3;
            printf("%d ", a);
        }
    }
    printf("\n");
    return 0;
}
