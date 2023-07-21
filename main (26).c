#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++);
    scanf("%d",&arr[i]);
    int x;
    scanf("%d",&x);
    int flag=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]==x)
        flag=1;
        break;
    }
    (flag==1)?printf("Available"):
    printf("Not available");
    
}