#include<stdio.h>
void main()
{
    int num[]={-2,1,-3,4,-1,2,1,-5,4};
    int max_sum=num[0];
    for(int i=1;i<=9;i++)
    {
        int sum=0; 
        for(int j=i;j<=9;j++)
        {
            sum+=num[j]; 
            if(sum>max_sum) {
                max_sum=sum;
            }
        }
    }
    printf("Largest sum:%d",max_sum); 
}
