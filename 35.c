/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fact(int num)
{
    int fac ;
    if(num == 1)
    return 1 ;
    else
     return num * fact(num-1) ;
}

int main()
{
    int a ;
    printf("Enter a num to find a factorial ");
    scanf("%d",&a);
    printf("factorial is %d", fact(a));

    return 0;
}
