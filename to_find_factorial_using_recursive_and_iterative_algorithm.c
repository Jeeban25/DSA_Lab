#include<stdio.h>
unsigned long factorial(int n)
{
    unsigned long fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n =5;
    printf("The factorial of %d is %lu",n,factorial(n));
    return 0;
}