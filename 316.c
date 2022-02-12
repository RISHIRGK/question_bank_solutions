// Write a program to read integer numbers in an m[10] array, and print the elements of this array using pointers.
#include<stdio.h>
int main()
{
int m[10],i;
int *ptr;
ptr=m;//or ptr=&m[o];
for ( i = 0; i < 10; i++)
{
     printf("enter the number %d\n",i+1);
        scanf("%d",&m[i]);//or  scanf("%d",(m+i)); or scanf("%d",(ptr+i));
}
for (i = 0; i < 10; i++)
{
    printf("%d\n",*(ptr+i));// or     printf("%d\n",*(m+i)); or     printf("%d\n",ptr[i]); or     printf("%d\n",m[i]); or     printf("%d\n",i[ptr]);
    //or     printf("%d\n",i[m]);



        



}



    return 0;
}