/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    unsigned int num = 256 ;
    unsigned int bit1 =0 , bit2 = 0 , x = 0; 
    
    bit1 = (num>>7)&1 ;
    bit2 = (num>>8)&1 ;
    
    x = bit1^bit2 ;
    
    x= (x<<7)|(x<<8);
    
    num = num ^ x ; 
    
    printf("\n%d",num);
   
}
