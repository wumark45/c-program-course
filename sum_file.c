#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char buf[1000];
    char *p = fgets(buf, sizeof(buf), fp);
    while (p != NULL)
    {
        char delims[] = ",";
        char *token = strtok(buf, delims);
        int count = 0;
        int sum = 0;
        while (token != NULL)
        {
            count ++;
            sum = atoi(token)+sum;
            token = strtok(NULL, delims);
        }
        printf("count %d,sum: %d\n", count, sum);
        p = fgets(buf, sizeof(buf), fp);
    }
    fclose(fp);
    return 0;
}

