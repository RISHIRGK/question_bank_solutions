// Write a program using pointer and function to determine the length of string
#include<stdio.h>
int len(char*a)
{
    int i=0;
    while (a[i]!='\0')//can also use*(a+i)==a[i]
    {
        i++;
    }
    return i;
    
}
int main()
{
    char s[50];
    gets(s);
    printf("length of the string is %d ",len(s));
    return 0;
}