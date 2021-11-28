#include<stdio.h>
long int fact(int n);
long int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;

    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("factorial of number %d=%ld",n,fact(n));
    return 0;
}
