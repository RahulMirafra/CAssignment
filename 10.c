/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define SET(a,n) (a |= (1<<n))

int main()
{
    int num = 0 ;
    
    SET(num,17);
    printf("%d\n",num);
    SET(num,18);
    printf("%d\n",num);
    
    return 0;
}
