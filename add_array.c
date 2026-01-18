#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a[],int len1,  int b[], int len2, int r[], int len3)
{
    int *p = (int*) malloc (len3 *4);
    for (int i=0; i<len3; ++i)
    {
        p[i] = 0;
    }   

    int len = (len1 < len2) ? len1 : len2;
    for (int i=0; i<len; ++i)
    {
         int t = a[i] + b[i] +p[i];
         if (t >= 10)
         {
              p[1+i] = 1;
         }
         r[i] = t % 10;
    } 

    for (int i=len; i<len3-1; ++i)
    {
        int t =a[i] + p[i];
        if (t >= 10)
        {
            p[i+1] = 1;
        }

        r[i] = t % 10;
    }
    r[len3-1] = p[len3-1];
    free(p); p =NULL;
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc !=3)
    {
        printf("Please input 2 numbers!\n");
        return 1;
    }

    int length1 = strlen(argv[1]);
    int *a = (int*)malloc(length1 * 4);
    for (int i=0; i<length1; ++i)
    {
        a[i] = argv[1][length1-1-i]-'0';
       // printf("a[%d]=%d\n", i, a[i]);
    }

    int length2 = strlen(argv[2]);
    int *b = (int*)malloc(length2 * 4);
    for (int i=0; i<length2; ++i)
    {
        b[i] = argv[2][length2-1-i]-'0';
       // printf("b[%d]=%d\n", i, b[i]);

   
    }
    printf("%d,%d\n", length1, length2);

    int length3 = (length1 > length2) ? length1+1 : length2+1;
    int *r = (int *) malloc(length3 * 4);
    add(a, length1, b, length2, r, length3);

    for (int i=length3-1; i>=0; --i)
    {
        printf("%d\n", r[i]);
    }

    free(a); a = NULL;
    free(b); b = NULL;
    free(r); r = NULL;

    return 0;
}
