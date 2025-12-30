#include<stdio.h>
#include<stdlib.h>

double compound(int amount, float rate, int years)
{    
    double current = 0;
    double compound = 0;
    for (int i=0; i < years; ++i)
    {
        current = compound + amount;
        compound = current * (1 + rate);
    }
    return compound;
}

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Please input parameters, like this:/n");
        printf("%s <deposit_amount> <interest_rate> <years>\n", argv [0]);
        printf("%s 100 0.04 10\n" , argv[0]);
        return 1;
    }

    int amount = atoi (argv[1]);
    double rate = atof (argv[2]);
    int years = atoi(argv[3]);
    
    printf("your input are: %d %f %d\n", amount, rate, years);
    double total = compound(amount, rate, years);
    printf("Totally you will get: $%f\n", total);
    return 0;
}
