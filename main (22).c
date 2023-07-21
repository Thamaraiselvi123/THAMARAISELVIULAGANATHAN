#include<stdio.h>
int main()
{
    int y,i,j;
    scanf("%d",&y);
    for(i=0;i<y;i++){
        for(j=0;j<i;j++){
        printf("*");}
        printf("\n");
    }
    return 0;
}
    