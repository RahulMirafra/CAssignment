/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num , temp ,r, Sum;
    printf("Enter a num " ) ;
    scanf("%d",&num);
    temp = num ;
    
    while(num>0)
    {
     r = num % 10 ;
     Sum = (Sum *10)+r;
     num = num/ 10 ;
    }
    
    if(Sum == temp)
        printf("Palingdrome");
    else
        printf(" Non Palingdrome");

    return 0;
}
