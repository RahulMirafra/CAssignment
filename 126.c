/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
    while(1)
    {
        int num ;
        printf("Please enter a num ");
        scanf("%d",&num);
        while(!(num%2))
        {
            num/=2;
        }
        if(num>1)
        {printf("not\n");}
        else
        printf("yes");
    }
}
