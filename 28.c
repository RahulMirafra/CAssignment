/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Link list program

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* next;
};

struct node* head = NULL ;

int create_node(int data)
{
    struct node* new_node =(struct node*)malloc(sizeof(struct node));
    
    if(new_node==NULL)
    {
        return 0 ;
    }
    else
    {
        new_node->data = data ;
        new_node->next = head  ;
        head = new_node;
    }
}

void display()
{
    struct node *ptr;  
    ptr = head;  
    while(ptr!=NULL)
    {
        printf(" %d",ptr->data);
        ptr = ptr->next ; 
    }
}

void insert_in_middel(int index,int data)
{
    struct node *ptr ;
    struct node *Prevptr ;
    
    ptr = head ;
    
    for(int i= 0 ; i<index ;i++)
    {
        Prevptr = ptr ;
        ptr = ptr->next ;
    }
    
      struct node* new_node =(struct node*)malloc(sizeof(struct node));
    
    if(new_node==NULL)
    {
        return 0 ;
    }
    else
    {
        new_node->data = data ;
        new_node->next = ptr  ;
        Prevptr->next = new_node ;
    }
    
}

void Delete_in_middel(int index)
{
    struct node *ptr ;
    struct node *Prevptr ;
    
    ptr = head ;
    
    for(int i= 0 ; i<index ;i++)
    {
        Prevptr = ptr ;
        ptr = ptr->next ;
    }
    
    Prevptr->next = ptr->next;
    
    free(ptr);
    
   /* 
      struct node* new_node =(struct node*)malloc(sizeof(struct node));
    
    if(new_node==NULL)
    {
        return 0 ;
    }
    else
    {
        new_node->data = data ;
        new_node->next = ptr  ;
        Prevptr->next = new_node ;
    }
    */
}

void find_middel()
{
    int count =  0; 
   struct node *ptr;
   
   ptr = head ;
   
   while(ptr!=NULL)
   {
        ptr = ptr->next ;
        count++;
   }
    count /= 2 ;
   
   ptr = head ;
   
   while(count>0)
   {
        ptr = ptr->next ;
        count--;
   }
   
   printf("middel node is %d",ptr->data);
   
}

void delete()
{
    struct node *ptr;
    ptr= head ;
    head = head->next ;
    free(ptr);
}

int main()
{
    int NUM,sel,IDX;
    
    while(1)
    {
        printf("\npress \n1.for adding node \n2.for display LL\n3.deleted\n4.Insert in middel\n5.delete in middel\n6.find middel node\n");
        scanf("%d",&sel);
        
        switch(sel)
        {
            case 1: 
                {
                    printf("Please enter number in node\n" );
                
                    scanf("%d",&NUM);
                    create_node(NUM);
                    break;
    
                }
            case 2:
                {
                    display();
                    break;
                }
            case 3:
                {
                    delete();
                    break;
                }
            case 4:
                {
                    printf("Please enter index of node\n" );
                
                    scanf("%d",&IDX);
                    
                    printf("Please enter number in node\n" );
                
                    scanf("%d",&NUM);
                    
                   insert_in_middel(IDX,NUM) ;
                    break;
                }
            case 5:
                {
                    printf("Please enter index of node\n" );
                
                    scanf("%d",&IDX);

                    
                   Delete_in_middel(IDX) ;
                    break;
                }
            case 6:
                {
                    find_middel();
                    
                    break;
                }
        
            
        }
    }
        
    return 0;
}

