#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "myarray.h"

int process_file(char * filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return 1;
    }
    char buf[255];
   
    char *p = fgets(buf,sizeof(buf),fp);   
    while(p != NULL)
    {
        int a[10];
        int len = 0;
        
        char *token = strtok(buf,",");
        while(token != NULL)
        {
            a[len]=atoi(token);
            len += 1;
            token=strtok(NULL,",");
        }
        printf("\n");
        sort_array(a, len);
        print_array(a, len);

        p = fgets(buf,sizeof(buf),fp);
    }
    printf("finished reading the file!\n");
    fclose(fp);
    return 0;
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input a filename!\n");
        return 1;
    }
    char * filename = argv[1];
    process_file(filename);

    return 0;
}
