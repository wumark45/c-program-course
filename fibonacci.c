#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    printf("Which fibonacci number do you want to know?\n");
   
    int n;
    scanf("%d", &n);
    
    printf("Your input is: %d\n", n);

    printf("I will calculate the %d-th Fibonacci number for you!\n",n);

    return 0;
}

