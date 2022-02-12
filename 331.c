// Write a program in C to sort an array using Pointer and functions both. Atleast one Argument to the function should be a pointer.
#include<stdio.h>
int i=0;
void print(int a[],int n)
{
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",*(a+i));
    }
    
}
void sort(int *arr,int n)
{int k;
for (size_t i = 0; i < n; i++)
{
   for (size_t j = i+1; j < n; j++)
   {
      if (arr[i]>arr[j])
      {
          k=arr[i];
          arr[i]=arr[j];
          arr[j]=k;
      }
      
   }
   
}

}
int main()
{
    int n;
printf("number of elements of the array\n");
scanf("%d",&n);
int arr[n];
for (size_t i = 0; i < n; i++)
{
    printf("enter the value of %d element\n",i+1);
    scanf("%d",&arr[i]);
}
sort(arr,n);
print(arr,n);

    return 0;
}
