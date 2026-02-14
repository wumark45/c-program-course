#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print_file(char * filename)
{
    FILE *fp=fopen(filename, "r");
    char buf[255];
    fgets(buf,255,fp);
    printf("%s\n",buf);
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
    print_file(filename);

    return 0;
}
