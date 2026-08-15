#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Initial error\n");
        return 1;
    }
    int min = atoi(argv[1]);
    int max = atoi(argv[1]);
    for (int i = 2; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    printf("User input:");
    char c;
    scanf(" %c", &c);
    if (c == 'A')
    {
        printf("Max: %d\n", max);
    }
    else if (c == 'B')
    {
        printf("Min: %d\n", min);
    }
    else
    {
        printf("Wrong input\n");
        return 2;
    }
    return 0;
}
