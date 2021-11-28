#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("\nThe entered fibonacci number is ");
    printf("%d ",fib(n));
    return 0;
}
