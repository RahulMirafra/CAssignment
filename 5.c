/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3] = {{4,2,3},{1,2,3},{1,2,3}};
    int b[3][3] = {{4,2,3},{1,2,3},{1,2,3}};
    int c[3][3] = {0} ;
    
    for(int i = 0 ; i<3 ; i++)
    {    for(int j = 0 ; j<3 ; j++)
            {    
                c[i][j] = a[i][j] + b[i][j] ; 
                printf("%d",c[i][j]);            
            }
            printf("\n");
    }
    return 0;
}
