#include <stdio.h>
int pf(int n,int d)
{
    if (n == 1)
    {
        return;
    }
    if (n % d == 0)
    {
        printf("%d ", d);
        return pf(n / d, d);
    }
    else
    {
        return pf(n, d + 1);
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