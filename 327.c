// Write a function (using a pointer parameter) that calculate maximum element from given array of integer numbers
#include<stdio.h>
int max(int a[],int n)
{int max=0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i]>max)   
        {
            max=a[i];
        }
        
    }
    return max;
    
}
int main()
{
    int n;
    printf("enter the number of the elements\n");
    scanf("%d",&n);
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        printf("enter the number %d\n",i+1);
        scanf("%d",arr+i);
    }
    printf("the max value of the array is %d",max(arr,n));
 
    return 0;
}