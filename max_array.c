#include<stdio.h>
#include<stdlib.h>

int find_max(int n, int arr[])
{
  
    /* use 'curr_max' to save the current max value*/
    int curr_max = arr[0];
    for (int i=1; i< n; ++i)
    {
        int a = arr[i];
      


        if (a > curr_max) {curr_max = a;}

    }
    return curr_max;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Input some intergers like this:\n");

        printf("%s 1 2 5 ....\n", argv [0]);
        return 1;
    }
    if (argc > 21)
    { 
        printf("Dont input more than 20 integers!\n");
        return 1;
    }
    int n = argc - 1;
    int*arrl= (int*)malloc(4*n);
    /* Usew mallow() allocate memory space for the array of integers*/
    int *arr = (int*)malloc(100);

    /* Problem: argv[] is an array of 'char', but we need arr[] is an array of 'int'.We need to do conversion.*/
   
    for (int i=0; i < n; ++i)
    {
        /* convert array of 'char' into array of 'int'*/
        arr[i] = atoi(argv[i+1]);
    }

   
    int s = find_max(n, arr);
   
    printf("The max value is: %d\n", s);
    free(arr);
    arr = NULL;
    return 0;
} 
