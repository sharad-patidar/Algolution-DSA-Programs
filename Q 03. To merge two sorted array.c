#include<stdio.h>
 void main()
 {
     int a[5],b[5],c[10];
     printf("array 1:\n");
     for(int i=0;i<5;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("array 2:\n");
     for(int i=0;i<5;i++)
     {
         scanf("%d",&b[i]);
     }
     for(int i = 0; i <5; i++)
       c[i] = a[i];
     for(int i = 0; i <5; i++)     
         c[i + 5] = b[i];
     printf("merged array:\n");
     for(int i=0;i<10;i++)
     {
         if(c[i]>c[i+1])
         {
             int temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
         }
     }
     for(int i=0;i<10;i++)
     {
         printf("%d ",c[i]);
        
     }
 }
