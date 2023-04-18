/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   unsigned char num = 8 ; 
   unsigned char rev_num  = 0 ;
   
   for(int i = 0 ;i<(sizeof(num)*8) ; i++)
   {
       
       //(num&(1<<(7-i))),
       if(num&(1<<i))
       {
           rev_num |= (1<<((sizeof(num)*8)-1-i)) ; 
       }
   }
    printf("\n%d",rev_num);
   
}
