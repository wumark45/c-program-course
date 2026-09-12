#include"my_func.h"
#include<stdio.h>
#include<stdlib.h>

int main( int argc, char * argv[])
{
    if( argc != 3)
    {
        printf("init error!\n");
        return 1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int r = func(x,y);
    printf("%d\n",r);
    return 0;
}
