/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int endiness_swap(int num)
{
    return (((num<<24)&0xff000000)|((num>>24)&0x000000ff)|((num<<8)&0x00ff0000)|((num>>8)&0x0000ff00));
}

int main()
{
    int BigEndiness = 0x12345678 ;
    int LittelEndiness = 0x78563412 ;
    
    printf("\n BigEndiness swap %x",endiness_swap(BigEndiness));
    
    printf("\n LittelEndiness swap %x",endiness_swap(LittelEndiness));
    
    return 0;
}
