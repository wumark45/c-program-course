#include<stdlib.h>
#include<stdio.h>

int print_space(int space)
{   
    for (int x=0; x<space; ++x)
        {
            printf(" ");
        }
    return 0;
}
 
int print_char(int number, char c)
{
    for(int j=0; j<number; ++j)
        {              
            printf("%c", c);
        }
    return 0;
}

int print_star(int row,char character)
{
    for(int i=0; i<row; ++i)
    {
        int n = i*2+1;
        int s = row-i;
        print_space(s);
        print_char(n, character);
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
