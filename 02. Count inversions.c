#include<stdio.h>
void main()
{
    int arr[]={7,2,6,3};
    int count=0;
    int n= sizeof arr/ sizeof arr[0];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j] && i<j)
            {
                count++;
            }
        }
    }
printf("Inversions:%d", count);
}
