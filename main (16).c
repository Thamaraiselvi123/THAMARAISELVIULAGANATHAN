#include<stdio.h>
int main()
{
    int i,a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++){
        c+=b;
    }
    printf("%d",c);
    return 0;
}    