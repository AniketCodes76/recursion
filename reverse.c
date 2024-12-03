#include<stdio.h>
int rev(int a)
{
    int r=0;
    if(a<10)
        return a;
    else
    {
        r=a%10;
        int i;
        for(i=a;i>0;i/=10)
        {
            r=r*10;
        }
        return(r/10+rev(a/10));
    } 
}
void main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int k= rev(a);
    printf("The reverse is %d",k);
}