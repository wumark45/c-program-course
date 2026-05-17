#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "myarray.h"

void contra(int *a,int len, int *b, int len_b)
{


}

int process_file(char * filename)
{
    FILE * fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return 1;
    }
    char buf[255];
   
    char * p = fgets(buf,sizeof(buf),fp);   
    int a[100];
    int len = 0;
        
    char * token = strtok(buf,",\n");
    while(token != NULL)
    {
        a[len]=atoi(token);
        len += 1;
        token=strtok(NULL,",\n");
    }
    printf("First vector, %d elements:\n", len);
    print_array(a, len);

    p = fgets(buf, sizeof(buf),fp);
    int b[100];
    int len_b = 0;
    token = strtok(buf,",\n");        
    while(token != NULL)
    {
        b[len_b]=atoi(token);
        len_b += 1;
        token=strtok(NULL,",\n");
    }
    printf("Second vector, %d elements:\n", len_b);
    print_array(b, len_b);

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
