#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int array_insert(int *b, int len, int y)
{
    /* insert y into b */
    int j=0;
    for(int i=0; i<len; ++i)
    {
        if(b[i]>y)
        {   
            j=i;
            break;
        }
    }
   // printf("j=%d\n", j);
    
    for(int i=len-2; i>=j; --i)
    {
        b[i+1] =b[i];
    }
    
    b[j]=y;
    return 0;

}

int print_array(int *a, int len)
{
    for (int i=0; i<len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int main(int argc, char *argv[])
{
    /*arg 1: comma seperated sorted numbers like 1,3,5,7,9
     *      argv[1][] = "1,3,5,17,29"
     *arg 2: the number to be inserted 
     * output: a sorted array
     */

    if (argc < 3)
    {
        printf("Please input a comma-seperated array and a number!\n");
        return 1;
    }

    int n = strlen(argv[1]);
    int comma_count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (argv[1][i] == ',')
        {
            comma_count = comma_count + 1;
        }
    }
   
    //the total # of integers from input 1
    int length = comma_count + 1;

    // allocate memory for the array of integers
    int *a = (int *) malloc((length+1) * 4);
    // printf("%d\n", comma_count);
  
    a[0] = atoi(&argv[1][0]);

    int j =length -1;

    for (int i = 0; i < n; ++i)
    {  
        if (argv[1][i] ==',')
        {
             a[j] = atoi(&argv[1][i+1]);
             j += 1; 
        }
    }
    printf("Before insertion\n");
    print_array(a, length+1);

    int x = atoi(argv[2]);
    array_insert(a, length+1,  x);
    printf("After insertion\n");
    print_array(a, length+1);

    free(a); a = NULL;
    return 0;
}
