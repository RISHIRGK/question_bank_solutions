// WAP to evaluate the investment equation v=p(1+r)^n where p,r,n are members of structures and structure variale should be compulsory pointer.
#include<stdio.h>
struct a{
    int *p,*r,*n;
}b;
int main()
{
    scanf("%d",&b.p);
    scanf("%d",&b.r);
    scanf("%d",&b.n);
    printf("%d",*(b->p));
    return 0;
}
