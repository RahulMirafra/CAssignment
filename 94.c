/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void BubbleSort(int a[],int num)
{    int temp ;
    
    for(int i = 0 ; i<num ; i++)
    {
        for(int j = 0 ; j < num-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = temp ;
            }  
        }
    }
    
    for(int k = 0 ;k <num ;k++)
        printf(" %d",a[k]);
}

int InsertionShort(int a[],int num)
{
    int key ;
    for(int i=1 ; i<num ; i++)
    {
        key = a[i] ;
        int j=0;
        for( j=i-1 ; (j>=0&&a[j] > key); j--)
        {
                a[j+1] = a[j];
        }
        a[j+1] = key ; 
    }
    
    for(int k = 0 ;k <num ;k++)
        printf(" %d",a[k]);
}

void swap(int* num1 , int* num2)
{
    int temp  = *num1 ;
    *num1= *num2 ;
    *num2 = temp ;
}

void SelectionShort(int a[],int num)
{
    int min = a[0];
    for(int i= 0 ; i<num ;i++)
    {
        //min = a[i] ;
        for(int j = i ;  j <num ; j++)
        {
            if(a[j]<a[i])
            {
                int temp = a[j];
                    a[j] = a[i] ;
                    a[i] = temp ;
            }
        }
      //  a[i]=min ;
    }
    
      for(int k = 0 ;k <num ;k++)
        printf(" %d",a[k]);
}


void Quick_short(int arr[], int low , int high)
{
    
    
   	if (low < high) {

		// pi is partitioning index, arr[p]
		// is now at right place
			// Choosing the pivot
	int pivot = arr[high];

	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		// If current element is smaller than the pivot
		if (arr[j] < pivot) {

			// Increment index of smaller element
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	
	int pi = i+1 ;

		// Separately sort elements before
		// partition and after partition
		Quick_short(arr, low, pi - 1);
		Quick_short(arr, pi + 1, high);
	}
}

int main()
{
    int a[10] = {12,3,2,46,7,5,8,16,18,34};
    
     int N = sizeof(a) / sizeof(a[0]);
     
     printf("Enter\n  1.BubbleSort\n  2.InsertionShort\n  3.SelectionShort\n  4.QuickShort");
     
     int sel = 0 ;
     
     scanf("%d",&sel);
     
     switch(sel)
     {
         case 1:
         {
            BubbleSort(a,N);
            break;
         }
         case 2:
         {
            InsertionShort(a,N);
            break;
         }
         case 3:
         {
            SelectionShort(a,N);
            break;
         }
         case 4:
         {
            Quick_short(a,0,N-1);
    
             for(int k = 0 ;k <10 ;k++)
                printf(" %d",a[k]);
            break;
         }
         
         
     }
       return 0;
}
