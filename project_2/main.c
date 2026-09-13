#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"func.h"

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
    while(fgets(buf,sizeof(buf),fp)!=NULL)
    {
        int len = buf2arr(buf,arr);
        int min=find_min(arr,len);
        int max=find_max(arr,len);
        printf("Min:%d,Max:%d\n",min,max);
    }
    fclose(fp);
    return 0;
}
