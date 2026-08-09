#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

void set_non_blocking_mode(struct termios *old_settings)
{
    struct termios new_settings;
    tcgetattr(STDIN_FILENO, old_settings);
    new_settings = *old_settings;
    new_settings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
}

void reset_terminal_mode(struct termios *old_settings)
{
    tcsetattr(STDIN_FILENO, TCSANOW, old_settings);
}

void draw (int spaceRow, int spaceColumn, int row, int column)
{
     int arrx[4];
     int arry[4];
     arrx[0] = spaceRow;
     arry[0] = spaceColumn;
     arrx[1] = spaceRow + 1;
     arry[1] = spaceColumn;
     arrx[2] = spaceRow + 2;
     arry[2] = spaceColumn;
     arrx[3] = spaceRow + 2;
     arry[3] = spaceColumn + 1;
     int empty = 0; 
     for (int i = 0; i < row; ++i)
     {
          for (int j = 0; j < column; ++j)
          {
               int empty = 0;
               for (int k = 0; k < 4; ++k)
               {
                    if (i == arrx[k] && j == arry[k])
                    {
                    empty = 1;
                    }
               }
               if (empty == 1)
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
    struct termios old_settings;
    set_non_blocking_mode(&old_settings);
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
         char ch;
        // Attempt to read 1 byte from stdin
        int bytes_read = read(STDIN_FILENO, &ch, 1);
        if (bytes_read > 0)
        {
            printf("\nYou pressed: %c\n", ch);
            if (ch == 'q' || ch == 'Q')
            {
                break;
            }
            else if (ch == 'w')
            {
                if (spaceRow > 0)
                {
                    spaceRow--;
                }
            } 
            else if (ch == 'a')
            {
                if (spaceColumn > 0)
                {
                    spaceColumn--;
                }
            }
            else  if (ch == 's')
            {
                if (spaceRow < rowMax-3)
                {
                   spaceRow++;
                }
            }
            else if (ch == 'd')
            {
                if (spaceColumn < columnMax-2)
                {
                   spaceColumn++;
                }
            }
           /* else
            {
                break;
            }*/
        }
        if (spaceRow < rowMax-3)
        {
             spaceRow++;     
        }
        sleep(1);
        fflush(stdout);
        usleep(200000); // Sleep 200ms to save CPU cycles
    }
    reset_terminal_mode(&old_settings);
    printf("\nProgram exited.\n");
    return 0;
} 
