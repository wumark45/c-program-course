#include <stdio.h>
#include <stdlib.h>

void draw (int spaceRow, int spaceColumn, int row, int column)
{
     for (int i= 0; i < row; ++i)
     {
        for (int j = 0; j < column; ++j)
        {
            if (i == spaceRow && j == spaceColumn)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
 
int main(int argc, char * argv[])
{
    if (argc < 5)
    {
        printf("initialization error\n");
        return 1;
    }
    int rowMax = atoi(argv[1]);
    int columnMax = atoi(argv[2]);
    if (rowMax < 1 || columnMax < 1)
    {
        printf(" Dimension error\n");
        return 4;
    }
    int spaceRow = atoi(argv[3]);
    if (spaceRow < 0 || spaceRow >= rowMax)
    {
        printf("first input too large\n");
        return 2;
    }      
    int spaceColumn = atoi(argv[4]);
    if (spaceColumn < 0 || spaceColumn >= columnMax)
    {
        printf("Second input too large\n");
        return 3;
    }
    char move;
    while (1)
    {
        draw(spaceRow, spaceColumn, rowMax, columnMax); 
        printf("Press W to move up, press A to move left, press S to move down, press D to move rigth ");
        scanf(" %c", &move);
        if (move == 'w')
        {
            if (spaceRow > 0)
            {
                spaceRow--;
            }
        }
        else if (move == 'a')
        {
            if (spaceColumn > 0)
            {
                spaceColumn--;
            }
        }
        else  if (move == 's')
        {
            if (spaceRow < rowMax-1)
            {
                 spaceRow++;
            }
        }
        else if (move == 'd')
        {
            if (spaceColumn < columnMax-1)
            {
                 spaceColumn++;
            }
        }
        else
        {
             break;
        }     
    }
    return 0;
} 
