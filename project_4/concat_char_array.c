#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myarray.h"

void copy_array (char *dst, char *srt, int n)
{
    for (int i=0; i<n;++i)
    {
        dst[i]=srt[i];
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf(" Please input two strings\n");
        return 1;
    }
    char *a = argv[1];
    char *b = argv[2];

    int n = strlen(a);
    int n1 = strlen(b);
    int clen = n + n1;
    char *c = (char *)malloc(clen);
    copy_array(c,a,n);
    copy_array(c+n,b,n1);
    printf("%s\n",c);
    free (c); c = NULL;
    return 0;
}
