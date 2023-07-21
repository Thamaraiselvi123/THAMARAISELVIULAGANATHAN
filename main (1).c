#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0,y>0)
    printf("it is first quadrant");
    else if(x>0,y<0)
    printf("it is second quadrant");
    else if(x<0,y<0)
    printf("it is third quadrent");
    else if(x<0,y>0)
    printf("it is fourth quadrent");
    return 0;
    
}
