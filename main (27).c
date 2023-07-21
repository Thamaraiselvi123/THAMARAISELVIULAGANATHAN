#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int len[x];int bre[x];int ar[x];
    for(int i=0;i<x;i++){
        scanf("%d",&len[i]);
        scanf("%d",&bre[i]);
        ar[i]=len[i]*bre[i];
    }
    for(int i=0;i<x;i++)
    printf("%d",ar[i]);
    return 0;
}
   