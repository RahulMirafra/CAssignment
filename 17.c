/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 3 ;
    char count = 0 ;
    
    for(int i=0 ; i<32 ;i++)
    {
        if(num&(1<<i))
            count++ ;
    }
    
    printf("\n count %d", count);
    return 0;
}
