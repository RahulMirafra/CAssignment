/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int find(int a[] , int idx,int num)
{
    for(int i = 0 ; i<idx ; i++)
    {
        if(a[i]==num)
        {
           return (i+1) ; 
        }
        
    }
    return 0 ;
}

int BinaryFind(int a[],int idx , int num)
{
    int low=0,high=idx-1 , mid ;
    
    
    
    while(low<=high)
    {
            mid = low + (high - low)/2 ;
            
            if(a[mid] == num)
                return mid ;
            if(a[mid]<num)
                low = mid +1 ;
            else
                high = mid -1 ;
                
    }
    
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int idx = find(a,10,4);
    int bin = BinaryFind(a,10,8) + 1;
    
    if(idx)
    printf("liniar Searched element is present in %d index",idx);
    else
    printf("element not found");
    
    if(bin)
    printf("\nbinary Searched element is present in %d index",bin);
    else
    printf("\nelement not found");

    return 0;
}
