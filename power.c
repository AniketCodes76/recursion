#include<stdio.h>
int pw(int a, int b)
{
    if(a==0)
        return 1;
    else
        return(a*pw(a,b-1));
}
void main()
{
    int a,b;
    printf("enter the number and power to raise it");
    scanf("%d %d",&a,&b);
    int k=pw(a,b);
    printf("the result is %d",k);
}