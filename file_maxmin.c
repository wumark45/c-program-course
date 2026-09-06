#include<stdio.h>
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

int main(int argc,char*argv[])
{
    if(argc!=2)
    {
        printf("Input error.\n");
        return 1;
    }
    char*filename=argv[1];
    FILE*fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Cannot open file.\n");
        return 2;
    }
    char buf[1000];
    int arr[100];
    int count=0;
    while(fgets(buf,sizeof(buf),fp)!=NULL)
    {
        char delims[]=",";
        char*token=strtok(buf,delims);
        while(token!=NULL)
        {
            arr[count]=atoi(token);
            count++;
            token=strtok(NULL,delims);
        }
    }
    int min=find_min(arr,count);
    int max=find_max(arr,count);
    fclose(fp);
    printf("Min:%d\n",min);
    printf("Max:%d\n",max);
    return 0;
}
