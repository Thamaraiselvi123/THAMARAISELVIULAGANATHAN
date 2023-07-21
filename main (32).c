#include<stdio.h>
int prime(int);
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
    {
        if(prime (i))
        printf("%d\n",i);
    }
}
int prime(int x)
{
    int flag=0;
    for(int j=2;j<x;j++)
    if(x%j==0)
    {
    flag=1;
    break;
    }
    if(flag==1)
    return 0;
    else
    return 1;
}