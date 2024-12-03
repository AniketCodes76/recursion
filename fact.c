#include<stdio.h>
int fact(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else
        return(a*fact(a-1));
}
void main()
{
    int a,k;
    printf("enter a number");
    scanf("%d",&a);
    k=fact(a);
    printf("%d",k);
}