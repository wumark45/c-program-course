#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n = strlen(argv[1]);
    int comma_count = 0;
    for (int i=0; i<n; ++i)
    {
        if (argv[1][i] == ',')
        {
            comma_count += 1;
        }
    }
    int length = comma_count + 1;
    
    int *a = (int *) malloc((length+1) * 4);
    
    int j = 1;

    for (int i=0; i<n; ++i)
    {
        if (argv[1][i] == ',')
        {
            a[j] = atoi(&argv[1][i+1]);
            j += 1;
        }
    }
    printf("%d\n",j);
    return 0;
}
