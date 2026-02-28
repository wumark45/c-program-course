#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myarray.h"


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input a comma-seperated array and a number!\n");
        return 1;
    }

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
    
    int *a = (int *) malloc((length) * 4);
    a[0]=atoi(&argv[1][0]); 
    int j = 1;

    for (int i=0; i<n; ++i)
    {
        if (argv[1][i] == ',')
        {
            a[j] = atoi(&argv[1][i+1]);
            j += 1;
        }
    }
    
    print_array(a, length);
    sort_array(a, length);
    print_array(a,length);
    return 0;
}
