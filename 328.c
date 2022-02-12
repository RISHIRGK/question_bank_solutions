// Write a program to do swapping of two elements using function with two pointers as arguments.
#include<stdio.h>
void swap(int *p,int *q)
{
    int i;
    i=*p;
    *p=*q;
    *q=i;
}
int main()
{
    int a,b,*p1=&a,*p2=&b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(p1,p2);
    printf("%d %d",*p1,*p2);



    return 0; 
}