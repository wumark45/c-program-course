#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n, int * arr)
{ 
    if (n == 0) { return 0;}
       
    arr[0] = 0;
    arr[1] = 1;
    for (int i=2; i <= n; ++i)
    {
         arr[i] = arr[i-1] + arr[i-2];
         printf("computed:f(%d) = %d\n", i,arr[i]);
    }

    return arr[n];
}

int main(int argc, char* argv[])
{
    int max_num = 46;
    int memory_size = (max_num+1)*4;
    int *arr = (int *) malloc(memory_size);
    
    int max_computed = 0;
   
    while (1)
    {
        printf("Which Fibonacci number do you want to know?\n");
   
        int n;
        scanf("%d", &n);
    
        printf("Your input is: %d\n", n);
        if (n < 0)
        {
            printf("Please input a positive interger.\n");
            return 1;
        }
        if (n > max_num)
        {
             printf("Please input an integer <= %d.\n", max_num);
             return 1;
        }
        int f = 0;
        if (n > max_computed)
        {
             f = fibonacci(n, arr);
             max_computed = n;
        }
        else
        {  
             f = arr[n];
        }
        
        printf("The %d-th Fibonacci number is: %d\n",n,f);

        printf("Do you want to continue? Y/N\n");
        char c;
        scanf(" %c", &c);
        if (c == 'Y')
        {
            printf("Good lets continue!\n");
        }
        else if (c == 'N')
        { 
            printf("Good bye!\n");
            break;
        }
        else 
        {
            printf("Sorry, I do not understand this input\n");
            printf("Goodbye\n");
            break;
        }
     }   
    free(arr);
    arr = NULL;
  
    return 0;
}

