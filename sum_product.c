#include<stdio.h>
#include<stdlib.h>
int main (int argc, char * argv[])
{
     if( argc < 2)
     {
           printf("initialization error\n");
           return 1;
     }
     int numbers[argc - 1];
     int sum = 0;
     for (int i = 1; i < argc; i++)
     {
         numbers[i - 1] = atoi(argv[i]);
         sum = sum + numbers[i - 1];
     }
     printf("Enter one integer: ");
     int c;
     int userInput;
     userInput = scanf("%d", &c);
     if (userInput != 1)
     {
         printf("Wrong input!\n");
         return 2;
     }
     int result = sum * c;
     printf("%d * %d = %d\n", sum, c, result);
     return 0;
}
