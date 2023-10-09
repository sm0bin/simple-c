// Write a program to solve factorial of given
// number using recursion.

#include <stdio.h>
int factorial(int n)
{
    int fact;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        fact = n * factorial(n - 1);
    }
    return fact;
}
int main()
{
    int n, fact;
    printf("Enter a integer number:");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial is=%d", fact);
    return 0;
}