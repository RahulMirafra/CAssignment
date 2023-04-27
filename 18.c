/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 15 ;
    char r1 = 2;
    char r2 = 4;
    char count = 0 ;
    
    for(int i=r1 ; i<=r2 ;i++)
    {
       /* if(num&(1<<i))
            count++ ;*/
            num ^=(1<<i) ;
    }
    
    printf("\n count %d", num);
    return 0;
}
