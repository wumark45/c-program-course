#include <stdio.h>
#include <stdlib.h>
#include "myarray.h"
void copy_array (int *dst, int *srt, int n)
{
    for (int i=0; i<n;++i)
    {
        dst[i]=srt[i];
    }
}

int main()
{
    int a[] = {1,3,4,5,8};
    int b[] = {2,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    int n1 = sizeof(b)/sizeof(b[0]);
    int clen = n + n1;
    int *c = (int *)malloc(clen * 4);
    copy_array(c,a,n);
    copy_array(c+n,b,n1);
    print_array(c,clen);
    return 0;
}
