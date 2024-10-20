#include<stdio.h>
#include<limits.h>
void main()
{
    int a[]={8,5,10,7,9,4,15,12,90,13};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    for(int i=0;i<=n-k;i++)
    {
        
        for(int j=1;j<k;j++)
        {
            if(a[i+j]>max)
            {
                max=a[i+j];
            }
        }
        printf("%d ",max);
    }
}
