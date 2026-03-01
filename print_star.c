#include<stdlib.h>
#include<stdio.h>

int print_star(int row)
{
    for(int i=0; i<row; ++i)
    {
        int number = i*2+1;
        int space = row-i;
        for (int x=0; x<space; ++x)
        {
            printf(" ");
        }
        for(int j=0; j<number; ++j)
        {              
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int a =atoi(argv[1]);

    print_star(a);
    return 0;
}
