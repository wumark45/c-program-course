#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double tok_sum_squared(char *buf)
{
    int sum_sq = 0;
    char delims[] = ",";
    char *token = strtok(buf, delims);
    while (token != NULL)
    {
        sum_sq = atoi(token) * atoi(token) + sum_sq;
        token = strtok(NULL, delims);
    }
    return sum_sq;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Input error.\n");
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
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        double norm = sqrt(tok_sum_squared(buf));
        printf("norm: %f\n", norm);
    }
    fclose(fp);
    return 0;
}
