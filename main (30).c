#include<stdio.h>
int add();
int main()
{
    int c=add();
    printf("%d",c);
    return 0;
}
    int add()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        return a+b;
    }

