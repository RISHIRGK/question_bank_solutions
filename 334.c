// W.A. P.that will copy m consecutive characters from a string s1 beginning at position n into another string s2.
//  m,n,s1 are members of stuctures Source. s2 is member of structure Dest.
//  Both structure variable should be compulsory pointer.
#include<stdio.h>
#include<stdlib.h>
struct a
{
    int *m;
    int *n;
    char*s1[50];
}source;
struct b
{
    char*s2[100];
}dest;

int main()
{
    int i;
   // char*s1[100];
    printf("enter the value of m\n");
    scanf("%d",&source.m);
    printf("enter the value of n\n");
    scanf("%d",&source.n);
    printf("enter the string s1\n");
   scanf("%s",source.s1);
    for ( i = 0; i < *source.m; i++)
    {
        dest.s2[i]=source.s1[((*source.n)-1)+i];
    }
    *dest.s2[i]='\0';
printf("strint s2 is:%s",*dest.s2);
    


    return 0;
}