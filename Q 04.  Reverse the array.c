#include<stdio.h>
 void main()
 {
     int a[7];
     printf("enter 7 numbers:\n");
     for(int i=0;i<7;i++)
     {
         scanf("%d",&a[i]);
     }
     int b[7],j=0;
     for(int i=6;i>=0;i--)
     {
         b[j]=a[i];
         j++;
     }
     printf("reversed:\n");
     for(int i=0;i<7;i++)
     {
         printf("%d ",b[i]);
     }
 }
