/*Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set B
of students like butterscotch ice-cream. Write C++ program to store two sets using linked
list. compute and display-
a) Set of students who like both vanilla and butterscotch
b) Set of students who like either vanilla or butterscotch or not both
c) Number of students who like neither vanilla nor butterscotch*/
//-----------------------------------------------------------------------------------------------------------

#include<iostream>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct node
 {
   char name[20];
   struct node *next;
 }node;

node *head,*head_v,*head_b,*p,*q;   
int v,b,i,x;
node *create(int x,node *head1);
void display(node *head);
void uni();
void inters();
int main()
{
   int i,no;
   head=head_v=head_b=NULL;    
   cout<<"\n\n\t ENTER TOTAL NUMBER OF STUDENTS: ";
   cin>>no;
   head=create(no,head);
   cout<<"\n\n\t ENTER TOTAL NUMBER OF STUDENTS WHO LIKE VANILLA: ";
   cin>>v;
   head_v=create(v,head_v);
   cout<<"\n\n\t ENTER TOTAL NUMBER OF STUDENTS WHO LIKE BUTTERSCOTCH: ";
   cin>>b;
   head_b=create(b,head_b);
   cout<<"\n\t CLASS STUDENT NAME:  ";
   display(head);
   cout<<"\n\t CLASS STUDENT NAME WHO LIKE VANILLA:  ";
   display(head_v);
   cout<<"\n\t CLASS STUDENT NAME WHO LIKE BUTTERSCOTCH:  ";
   display(head_b);
   uni();
   return 0;
}

//------------------------------------------------------------------------------

node *create(int no,node *head)
{
head=(node*)malloc(sizeof(node));
cout<<"\nENTER STUDENT NAME";
cin>>head->name;
head->next=NULL;
p=head;
for(i=1;i<no;i++)
  {
    p->next=(node*)malloc(sizeof(node));
    p=p->next;
    p->next=NULL;
    cout<<"\nENTER STUDENT NAME:   ";
    cin>>p->name;
   }
return(head);
}

//--------------------------------------------------------------------------------------------
void display(node *head)
{
 
   p = head;
   cout<<"[";
   while(p != NULL)
   {
    cout<<"  "<<p->name;
      p = p->next;
   }
   cout<<"]";
}
//---------------------------------------------------------------------------
void uni(node *head_v,node *head_b)
{
node *p,*q;
   int i,j;
    char a[10]; 
     
   i = 0;	
   p = head_v;	
   q = head_B;   
   
   while(p != NULL && q != NULL)
   {
      if(p->name == q->name)
      {
         a[i] = p->name;
         p = p->next;
         q = q->next; 
         i++;
      }
      else
      {
         a[i] = p->name;
         p = p->next;            
         i++;
      }
   }
   if(p == NULL)	
   {
      while(q != NULL)	
      {
         a[i] = q->name;
         q = q->next;            
         i++;
      }
   }
   
   if(q == NULL)	
   {
      while(p != NULL)	
      {
         a[i] = p->name;
         p = p->next;            
         i++;
      }
   }

   cout<<"\n\n\t UNION RESULT IS:[ ";
   for(j=0; j < i; j++)
      cout<<" "<<a[j];
   cout<<"]";   
         
}

//--------------------------------------------------------------------------
void inters()
{
   int i,j;
   char a[10];   
node *p, *q;
   
   i = 0;	
   p = head_v;	
   
   while(p != NULL)
   {
      q = head_b;   //pointer to Set 'B'
      while(q != NULL)
      {
         if(p->name == q->name)
         {
            a[i] = p->name;
            i++;                       
         }
         q = q->next;
      }
      p = p->next;      
   }
   
   cout<<"\n\n\t INTERSECTION RESULT IS: [ ";
   for(j=0; j < i; j++)
      cout<<" "<<a[j];
    cout<<"]";     
}
//--------------------------------------------------------------------------
void neither()
{
   int i,j,flag;
   int count=0;
   char a[10];   
node *p, *q;
   
   i = 0;	
   p = head_v;	
   
   while(p != NULL)
   {
      flag = 0;
      q = head_b;
      while(q != NULL)
      {
         if(p->name == q->name)
         {
            flag = 1;                     
         }
         q = q->next;
      }
      if(flag == 0)
      {
         a[i] = p->name;
            i++;  
      }
      p = p->next;      
   }
   
   cout<<"\n\n\t set of students who like neither vanilla nor butterscotch: ";
   for(j=0; j < i; j++)
    {
       count++;
      cout<<" "<<a[j];
    }  
      cout<<"\n\n\t Number of students who like neither vanilla nor butterscotch:   ";   
      cout<<count;
}



//................................................Function for Set B - A.

void B_Min_A()
{
   int i,j,flag;
   char a[10];   
   struct SLLNode *p, *q;
   
   i = 0;	//Index of Resultant Array
   q = headB;	//pointer to Set 'B'   
   
   while(q != NULL)
   {
      flag = 0;
      p = headA;   //pointer to Set 'A'
      while(p != NULL)
      {
         if(q->data == p->data)
         {
            flag = 1;                     
         }
         p = p->next;
      }
      if(flag == 0)
      {
         a[i] = q->data;
            i++;  
      }
      q = q->next;      
   }
   
   cout<<"\n\n\t Set B - A: ";
   for(j=0; j < i; j++)
      cout<<" "<<a[j];
}


//................................................Function for Set U - (A U B).

void U_Min_A_U_B()
{
    int i,j,flag;
   char a[10];   
   struct SLLNode *p, *q, *r;
   
   i = 0;	//Index of Resultant Array
   p = headU;	//pointer to Set 'U'   
   
   while(p != NULL)
   {
      flag = 0;
      q = headA;   //pointer to Set 'A'
      r = headB;   //pointer to Set 'B'      
      while(q != NULL)
      {
         if(p->data == q->data)
         {
            flag = 1;                     
         }
         q = q->next;
      }
      while(r != NULL)
      {
         if(p->data == r->data)
         {
            flag = 1;                     
         }
         r = r->next;
      }
      if(flag == 0)
      {
         a[i] = p->data;
            i++;  
      }
      p = p->next;      
   }
   
   cout<<"\n\n\t Set U - (A U B): ";
   for(j=0; j < i; j++)
      cout<<" "<<a[j];
}*/
