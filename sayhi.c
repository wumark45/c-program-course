#include<stdio.h>
#include<stdlib.h>

int sayhi(char *name)
{
    printf("Hi, %s!\n", name);
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        printf("Please input your friend's name,like this:\n");
        printf("%s <Mark>\n", argv[0]);
        return 1;
    }
    char *name = argv[1];
    sayhi(argv[1]);
    return 0;
}
