#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print_file(char * filename)
{
    FILE *fp=fopen(filename, "r");

    if (fp ==NULL)
    {
    printf("Error: open file failed.\n");
    return 1;
    }
    char buf[255];
    char*p=fgets(buf,sizeof(buf),fp);
    while(p!=NULL)
    {
   // fgets(buf, sizeof(buf),fp);
    printf("%s\n",buf);
    p=fgets(buf, sizeof(buf),fp);
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
    print_file(filename);

    return 0;
}
