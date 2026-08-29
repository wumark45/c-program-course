#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tok_sum(char *buf)
{
    int sum = 0;
    char delims[] = ",";
    char *token = strtok(buf, delims);
    while (token != NULL)
    {
        sum = atoi(token) + sum;
        token = strtok(NULL, delims);
    }
    return sum;
}

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
    int count = 0;
    char buf[1000];
    char *p = fgets(buf, sizeof(buf), fp);
    while (p != NULL)
    {
        int sum = tok_sum(buf);
        printf("count: %d,sum: %d\n",count,sum);
        count++;
        p = fgets(buf, sizeof(buf), fp);
    }
    fclose(fp);
    return 0;
}
