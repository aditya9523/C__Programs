#include <stdio.h>
#include <stdlib.h>
int addition(int *, int *);
int main()
{
    int a,b,sum;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    sum=addition(&a,&b);
    printf("Sum of Two no is :%d",sum);
    return(0);
}
int addition(int *x, int *y)
{
    int add;
    add=*x + *y;
    return (add);
}
