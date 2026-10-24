#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please provide a string.\n");
        return 1;
    }
    char *c = argv[1];
    int len = strlen(c);
    for (int i = 0; i < len / 2; i++)
    {
        char last = c[i];
        c[i] = c[len - 1 - i];
        c[len - 1 - i] = last;
    }
    printf("%s ", c);
    printf("\n");
    return 0;
}
