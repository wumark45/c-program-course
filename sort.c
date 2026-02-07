#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min_value(int *a, int length)
{
    int q=0;
    int minimum=a[0];
    for (int i=0; i<length ;++i)
    {
        printf("%d\n",a[i]);
        if (minimum>a[i])
        {
            q=i;
            minimum=a[i];
        }  
    }
    printf("Location %d\n",q);
    printf("Value %d\n", minimum);
    return 0;
}

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
    printf("%d\n",j);
    min_value(a,length);
    return 0;
}
