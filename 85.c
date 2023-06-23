/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * ptr ;
    int num = 10 ;
    ptr = (int*)malloc(sizeof(int));
    
    ptr = &num ;
    
    free(ptr);
    
    // for avoiding dangling pointer issue
    ptr= NULL ;

    return 0;
}
