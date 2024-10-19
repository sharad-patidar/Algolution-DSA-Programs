#include<stdio.h>
void main()
{
    int a[]={1,2,3,1,2,3,1,2,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    int visited[n];
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if (a[i]==a[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            printf("%d occurs %d times\n",a[i],count);
        }
    }
}
