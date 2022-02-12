// Write a program using pointer to read in an array of integers and print its elements in reverse order
#include <stdio.h>
int main()
{
    printf("enter the number of elements of array\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    int *ptr=arr;
    for (size_t i = 0; i < n; i++)
    {
         printf("enter the number %d\n",i+1);
          scanf("%d",ptr+i);
    }
for (size_t i = 0; i < n; i++)
{
    printf("%d\n",*(ptr+((n-1)-i)));
}

    
    return 0;
}