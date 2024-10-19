#include<stdio.h>
void main()
{
    int arr[6] = {7,1,5,3,6,4};
    int i,j,a,b;
    int min = arr[0];
    for(i=0;i<6;i++){
        if(arr[i]<min){
            min = arr[i];
            a = i;
        }
    }
    int max = arr[a];
    for(j=a;j<6;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    int res = max - min;
    printf("%d",res);
}
