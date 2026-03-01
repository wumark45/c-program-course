#include<stdlib.h>
#include<stdio.h>

int print_star(int row,char character)
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
            printf("%c", character);
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    char v = *argv[2]; 
    print_star(a,v);
    return 0;
}
