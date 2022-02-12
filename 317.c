// Write a program to find out sum of 6 elements of array using pointer.
#include<stdio.h>
int main()
{int n;
printf("enter the numbers of the elements\n");
scanf("%d",&n);
int arr[n];
int *p=arr;
for (size_t i = 0; i < n; i++)
{
       printf("enter the number %d\n",i+1);
        scanf("%d",arr+i);
}int sum=0;
for (size_t i = 0; i < n; i++)
{
    sum+=*(p+i);
}
printf("sum is %d",sum);



    

    return 0;
}