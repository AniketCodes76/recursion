#include<stdio.h>
int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    else    
        return ( fib(n-1)+fib(n-2));
}
void main()
{
    int a,i;
    printf("enter the terms");
    scanf("%d",&a);
    for ( i = 1; i <= a; i++)
    {
        int k=fib(i);
        printf("%d ",k);
    }
    
}