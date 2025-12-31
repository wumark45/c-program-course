#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{ 
    if (n == 0) { return 0;}
    int memory_size = (n+1)*4;
    int *arr = (int *) malloc(memory_size);
    
    arr[0] = 0;
    arr[1] = 1;
    for (int i=2; i <= n; ++i)
    {
         arr[i] = arr[i-1] + arr [i-2];
    }
    return arr[n];
}

int main(int argc, char* argv[])
{
    printf("Which fibonacci number do you want to know?\n");
   
    int n;
    scanf("%d", &n);
    
    printf("Your input is: %d\n", n);
    if (n < 0)
    {
        printf("Please input a positive intergers/n");
        return 1;
    }
    int f = fibonacci(n);
    if (n == 1)
    {
        printf("The first Fibonacci number is: %d\n",f);
    }
    else
    {
        printf("The %d-th Fibonacci number is: %d\n",n,f);
    }
    return 0;
}

