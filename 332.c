// Write a program in C to print all the alphabets using a pointer and functions both. Atleast one Argument to the function should be a pointer.
#include<stdio.h>
void print(int*p)
{
     for (size_t i = 0; i < 26; i++)
    {
        printf("%c\n",*p+i);
    }
}
int main()
{
    int *ptr;
    int a=65;
    ptr=&a;
    print(ptr);
    
    return 0;
}