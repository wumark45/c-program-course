#include<stdio.h>
#include<stdlib.h>

int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

int maximum1 (int a, int b, int c)
{    
    if (a > b)
    {
        if (a > c)       
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else 
    { 
        if ( b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int maximum(int a, int b, int c)
{
  
     int t = max2(a, b);
     int s = max2(t, c);
 
     return s;
}

int min2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int minimum(int a,int b, int c)
{
    int t = min2(a, b);
    int s = min2(t, c);
    return s;
}
int main (int argc, char *argv[])
{
    if (argc !=4)
    {
        printf("Please input 3 intergers, like this:\n");
        printf("%s 1 2 3\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int m = maximum1(a, b ,c);
    int k = minimum(a, b, c);
    printf("minimum(%d,%d,%d)= %d\n", a, b, c, k);
    printf("maximum(%d,%d,%d)= %d\n", a, b, c, m);
    return 0;
}
