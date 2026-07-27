#include<stdio.h>
#include<stdlib.h>

int main(int argc,char * argv[])
{
    int correctNumber;
    int userGuess;
    if(argc != 2)
    {
         printf("initialization error");
         return 1;
    }
    correctNumber = atoi(argv[1]);
    int c;
    while (correctNumber != userGuess)
    { 
         printf("your guess:");
         int x=scanf("%d",&c);
         if(x != 1)
         {
             printf("Wrong input!\n");
             return 2;
         }
         userGuess = c;
         if(userGuess == correctNumber)
         {
              printf("correct.\n");
         }
         else if(userGuess > correctNumber)
         { 
             printf("n<%d.\n",userGuess);
         }
         else if(userGuess < correctNumber)
         {
             printf("n>%d.\n",userGuess);
         }
    }
    return 0;
}
