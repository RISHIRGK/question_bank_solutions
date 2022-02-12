// Write a program to copy one array into another array using pointers
#include<stdio.h>
int main()
{ int n;
    printf("enter the number of the elements\n");
    scanf("%d",&n);
    int a[n],b[n];
    int *p=a;
    for (size_t i = 0; i < n; i++)
    {
         printf("enter the number %d\n",i+1);
        scanf("%d",a+i);
    }
    for (size_t i = 0; i < n; i++)
    {
        b[i]=*(p+i);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("\nthe value of the b[%d] is :",i);
        printf("%d",b[i]);
    }
    
    
    return 0;
}