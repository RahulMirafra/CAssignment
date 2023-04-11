/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10] = {1,2,3,3,3,3,4,4,3,3},p=0,c=1;
    
    for(int i = 0 ; i < 10 ; i++ )
    {
        for(int j = i+1 ; j < 10 ; j++ )
        {
            if(a[i] == a[j])
            {
                c++ ;
            
            }
            
        }
      //  printf("%d",c);
        if(p<c)
        {
            p = c ;
        }
        c= 1 ;
        
    
    }
        printf("%d",p);
    //printf("Hello World");

    return 0;
}
