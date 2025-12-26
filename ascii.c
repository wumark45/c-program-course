#include<stdio.h>
#include<stdlib.h>
int ascii()
{
 
    char a = 'A';
    char d = 'd';
    char e = 'e';
    char n = 'n';
    printf( "%c%c%c%c\n", a,d,e,n);

    printf("ASCII %c: %d\n", a, a);
    printf("ASCII %C: %d\n", d, d);

    int s = sizeof(a);
    printf("ASCII %c size: %d\n", a, s);

    int x = 0;
    int xs = sizeof(x);
    printf("Integer %d size: %d\n", x, xs);
    return 0;
}

int array()
{
    /* define array of char */
    char name[] = {'A', 'd', 'e', 'n', '\0'};
    for(int i=0; i<5; ++i)
    {
    printf("%c, %d\n", name [i],  name [i]);
    }
   
    printf("%s\n", name);
    return 0;
}

int main()
{
    ascii ();
    array ();
    return 0;
}
