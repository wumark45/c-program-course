#include<string.h>
#include<stdlib.h>
int find_max(int*arr,int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int find_min(int*arr,int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int buf2arr(char * buf, int * arr)
{
     char * delims = ",";
     char * p= strtok(buf,delims);
     int i = 0;
     
     while( p != NULL)
     {
         int x = atoi(p);
         arr[i]= x;
         p = strtok (NULL, delims);
         i++;    
     }
     return i;
}
