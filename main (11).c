/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i,flag=0;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("the given number %d is prime",a);
    else
    printf("%d is not prime",a);

    
}
