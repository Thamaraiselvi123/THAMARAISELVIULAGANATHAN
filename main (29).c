#include<stdio.h>
void add(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    add(x,y);
    return 0;
}
    void add(int a,int b)
    {
        
        printf("%d",a+b);
    }

