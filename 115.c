/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct person
{
    char arr[10];
    int age ;
    
};

union num
{
    int integer ;
    float floting;
    char string[10]; 
};

int main()
{
    struct person arun ;
    strcpy(arun.arr ,"arun");
    arun.age = 13 ;
    printf("structure has name %s age %d \n",arun.arr,arun.age);
    
    union num a1 ;
    
    a1.integer = 12;
    
    printf("integer %d\n",a1.integer);
    
    a1.floting = 2.5;
    
    printf("float %f\n",a1.floting);
    
    strcpy(a1.string,"anything");
    
    printf("string is %s",a1.string);
    
    char anystr[20];
    anystr[20] = "anything";
    
    printf("%s",anystr);
    
    

    return 0;
}
