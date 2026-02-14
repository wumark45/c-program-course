#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_array(int *a, int len)
{
    for (int i=0; i<len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int min_value(int *a, int length)
{
    int q=0;
    int minimum=a[0];
    for (int i=0; i<length ;++i)
    {
       // printf("%d\n",a[i]);
        if (minimum>a[i])
        {
            q=i;
            minimum=a[i];
        }  
    }
   // printf("Location %d\n",q);
    //printf("Value %d\n", minimum);
   
    a[q]=a[0];
    a[0]=minimum;   

   // print_array(a, length);
    return 0;
}

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
  //printf("%d\n",j);
    for(int i=0; i<length-1; ++i)
    {
        min_value(a+i,length-i);
    }   
    print_array(a,length);
    return 0;
}
