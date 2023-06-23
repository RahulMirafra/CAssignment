/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union endian
{
    char buff[4];
    unsigned int num ;
};

int main()
{
    union endian value ;
    
    value.num = 0x12345678;
    
    value.num =(unsigned int)( (unsigned int)value.buff[0]<<24|(unsigned int)value.buff[1]<<16|(unsigned int)value.buff[2]<<8|(unsigned int)value.buff[3]);
    printf("%x",value.num);

    return 0;
}
