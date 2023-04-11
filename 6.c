/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node* head =NULL;

struct node
{
    char Name[30] ;
    char mark ; 
    struct node* next ;
};

bool IsPrime(int Num)
{
    if(Num ==0 || Num ==1 )
        return false ; 
    else if(Num == 2)
        return true ;
    else
    {
        for(int i = 2 ; i<Num ;i++)
        {
           if(Num%i==0)
           return false ; 
           
        }
        return true ; 
    }
}

void create_node()
{
  /*   
     if(head == NULL)
     {
        head = (struct node*)malloc(sizeof(struct node));
        head->Name = name ;
        head->mark = m   ;
        head->next = NULL ; 
     }
     else
     {*/
        char Name[20];
        char mark ; 
        
        printf("\nEnter student name :-");
        scanf("%s", Name);
        //fgets(Name, sizeof(Name), stdin);
       // gets(Name)   ;
        
        printf("\nEnter marks :-");
        scanf("%d",&mark);
        
        struct node* ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
     
        strcpy(ptr->Name ,Name);
       // ptr->Name = Name;
        ptr->mark = mark ;
        ptr->next = head ;
        head = ptr  ;
        
   //  }
    
}

void Print_list()
{
    struct node* n =NULL;
    
    n = head ;
    
    while ( n!= NULL) 
    {
        if(IsPrime(n->mark))
            printf(" %s %d(Prime) \n ", n->Name , n->mark);
        else
            printf(" %s %d(Non Prime) \n ", n->Name , n->mark);
        n = n->next;
    }
}

int main()
{
  int s  ;
  
  while(1)
  {
        s  =0 ;
        printf("Please make the selection\n\n 1.Enter new Data \n 2.Printdata \n") ; 
        scanf("%d",&s);
  
        switch(s)
        {
        case 1: 
            create_node() ;
            break ;
            
        case 2:
            Print_list() ;
            break ;
            
        }
  }
   // struct node* ptr;
    
  //  head = (struct node*)malloc(sizeof(struct node));
    
  //  printf("Hello World");
    return 0;
}
