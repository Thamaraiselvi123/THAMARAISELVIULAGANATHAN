/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int age,wt,tt,rh,glu,bp;
   char bg[3];
   printf("enter the age:");
   scanf("%d",&age);
   printf("enter wt:");
   scanf("%d",&wt);
   printf("enter tt:");
   scanf("%d",&tt);
   printf("enter rh:");
   scanf("%d",&rh);
   printf("enter glu:");
   scanf("%d",&glu);
   printf("enter bp:");
   scanf("%d",&bp);
   printf("enter blood group:");
   scanf("%s",bg);
   if(age>18){
       if(wt>=55&&wt<=85){
           if(tt==1){
               if(rh==0){
                   if(glu==1){
                       if(bp>=80&&bp<=120){
                           printf("the candiate with blood group %s can donate blood",bg);
                       }
                   }
               }
           }
       }
   }
   else
   printf("candidate is not eligible");
   return 0;
}
