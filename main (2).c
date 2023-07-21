#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<18)
    printf("most cold");
    else if(a<27&&a>18)
    printf("it is normal");
    else if(a<33&&a>27)
    printf("it is slightly hot");
    else if(a<60&&a>33)
    printf("it is hot and humid");
    else if(a<90&&a>60)
    printf("it is else or burning");
    return 0;
    
}
