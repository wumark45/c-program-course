#include <stdio.h>

int main( int argc, char * argv[])
{
     if (argc != 2)
     {
         printf("Please input a filename.\n");
         return 1;
     }
     char * filename = argv[1];
     FILE * fp = fopen( filename,"r");
     if (fp == NULL)
     {
         printf("File %s failed.\n", filename);
         return 2;
     }
     char buf[255];
     char * p = fgets(buf, 255, fp);
     if (p == NULL)
     {
         printf("Failed to read file\n");
     }
     else 
     {
         printf("%s\n",buf);
     }
     fclose(fp);
     return 0;
}
