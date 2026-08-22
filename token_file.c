#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[])
{
    if (argc != 2)
    {
        printf("Please input a filename.\n");
        return 1;
    }
    char * filename = argv[1];
    FILE * fp = fopen(filename, "r");
    if( fp == NULL)
    {
        printf("Cannot open file\n.\n");
        return 2;
    }
    char buf [1000];
    char * p = fgets(buf, 1000, fp);
    if (p == NULL)
    {
        printf(" Failed to read file\n");
    }
    else
    {
    printf("%s\n",buf);
    }
    char delims[]=",";
    char *token = strtok (buf, delims);
    int count = 0;
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delims);
        count ++;
    }
    printf("count :%d\n", count);
    fclose(fp);
    return 0;
}
