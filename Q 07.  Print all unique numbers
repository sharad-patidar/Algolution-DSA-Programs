#include<stdio.h>
void main()
{
    int a[10]={1,2,1,5,6,8,7,3,2,7};
    printf("array is:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nunique numbers are:");
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",a[i]);
        }
    }
