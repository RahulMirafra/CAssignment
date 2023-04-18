/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
union endiness
{
  unsigned int num ;
  char arr[4];
};

int main()
{
    union endiness new ; 
    new.num = 1 ;
    
    if(new.arr[0])
        printf("Little endiness");
    else
        printf("Big endiness");
    return 0;
}
