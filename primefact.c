#include <stdio.h>
int pf(int a, int b)
{
    if (a == 1)
    {
        return;
    }
    if (a % b == 0)
    {
        printf("%d ", b);
        return (pf(a / b, b));
    }
    else
    {
        return (pf(a, b + 1));
    }
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    pf(n, 2);
}
