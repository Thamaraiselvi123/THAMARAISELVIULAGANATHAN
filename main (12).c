/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int a,i,p=0;
    scanf("%d",&a);
    for(i=1;i<a/2;i++){
        if(i*i==a)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    printf("the given number %d is perfect square",a);
    else
    printf("%d not perfect prime",a);
 

    
}
