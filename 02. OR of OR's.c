#include<stdio.h>
void main()
{
    int a[]={1,4,6};
    int n=3;
    int total_or=0;
    
    for(int i=0;i<n;i++)
    {
        int curr_or=0;
        for(int j=i;j<n;j++)
        {
            curr_or = curr_or |= a[j];
            total_or |= curr_or;
        }
    }
    printf("%d",total_or);
}
