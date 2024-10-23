#include<stdio.h>
void main ()
{
    int a[]={-7, 1, 5, 2, -4, 3, 0};
    int l=0,r=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n/2;i++)
    {
        l+=a[i];
    }
    for(int j=n-1;j>n/2;j--)
    {
        r+=a[j];
    }
    if(l==r)
    {
        printf("%d",n/2);
    }
    else
    {
        printf("-1");
    }
}
