/*Department of Computer Engineering has student's club named 'Pinnacle Club'. Students of
second, third and final year of department can be granted membership on request. Similarly
one may cancel the membership of club. First node is reserved for president of club and last
node is reserved for secretary of club. Write C++ program to maintain club member‘s
information using singly linked list. Store student PRN and Name. Write functions to:
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two lists.*/

#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
typedef struct node
 {
int PRN;
char name[20];
struct node *next;
 }node;

node *head,*pre,*sre,*q,*r,*p;
node * create();
int i,x;
void print(node *p);
void count();
node *insert_pos();
node *delet_front();
node *delet_end();
node *delet_pos();
//-------------------------------------------------------------------------------------------------------
int main()
{
head=NULL; 
int ch=0;
 cout<<"\n1.Add president and secretary.\n2.Add new club membres\n3.delete president node\n4.delete secretory node\n5.delete club memebrs\n6.Compute total number of members of club\n";
while(ch<7)
 {
 cout<<"\n\n\t ENTER YOUR CHOICE: ";
 cin>>ch;
 switch(ch)
 {
  case 1:create();
         break;
  case 2:head=insert_pos();
         break;
  case 3:head=delet_front();
        break;      
  case 4:head=delet_end();
        break;
  case 5:head=delet_pos();
        break;
  case 6:count();
         break;
  default: break;                                             
}
}
return 0;
}
//--------------------------------------------------------------------
node *create()
{
cout<<"\n\nENTER THE PRESIDENT INFORMATION: ";
head=(node*)malloc(sizeof(node));
cout<<"\n\nenter node PRN\t";
cin>>head->PRN;
cout<<"\n\nenter NAME OF STUDENT\t";
cin>>head->name;
head->next=NULL;
pre=q=p=head;
cout<<"\n\nENTER THE SECRETORY INFORMATION: ";
sre=(node*)malloc(sizeof(node));
cout<<"\n\nenter node PRN\t";
cin>>sre->PRN;
cout<<"\n\nenter NAME OF STUDENT\t";
cin>>sre->name;
sre->next=NULL;
p->next=sre;
print(p);
return (head);
}
//-------------------------------------------------------------------------
void print(node*p)
{
p=head;
cout<<"\n\t\t\t*******PINACCAL CLUB INFORMATION******\n\n";
cout<<"\n STUDENT NAME\t PRN NUMBER";
while(p!=NULL)
{
cout<<"\n";
cout<<p->name;
cout<<"\t";
cout<<p->PRN;
p=p->next;
}
}
//-----------------------------------------------------------------------
void count()
{
int count=0;
while(p!=NULL)
{
count++;
p=p->next;
}
cout<<"\n\n\tTOTAL NUMBER OF CLUB MEMBERS:   ";
cout<<count;
}
//---------------------------------------------------------------------
node *insert_pos()
{
int val;
node *q,*temp;
p=pre;
cout<<"\n\nENTER TOTAL NUMBER OF REQUEST\t";
cin>>val;
if(p->next==NULL)
{
l1:for(i=0;i<val;i++)
{
p->next=(node*)malloc(sizeof(node));
p=p->next;
cout<<"\n\nenter PRN NUMBER\t";
cin>>p->PRN;
cout<<"\n\nENTER STUDENT NAME\t";
cin>>p->name;
p->next=NULL;
}
p->next=sre;
print(p);
}
else
{
while(p->next!=sre)
p=p->next;
goto l1;
}
return(head);
}
//------------------------------------------------------------------------
node *delet_front()
{
p=head;
head =head->next;
free(p);
pre=head;
cout<<"\n\n PRESIDENT NODE DELETED\n";
print(p);
return(head);
}
//----------------------------------------------------------------------
node *delet_end()
{
node *r,*q;
p=head;
while(p->next->next!=NULL)
p=p->next;
q=p->next;
free(q);
p->next=NULL;
p=head;
cout<<"\n\n AFTER DELETE SECRETORY NODE\n";
print(p);
return(head);
}
//-----------------------------------------------------------------------
node *delet_pos()
{
int val;
node *r,*temp;
p=head;
cout<<"\n\n ENTER PRN NUMBER FOR DELETE\t";
cin>>val;
while(p!=NULL)
{  
if(p->next->PRN==val)
{
cout<<"\n\n node PRN  found";
temp=p->next->next;
r=p->next;
p->next=temp;
p=head;
free(r);
print(p);
goto l1;
}
p=p->next;
}
cout<<"\n\n node PRN not found\n";
l1:cout<<"\n\n";
return(head);
}
//------------------------------------------------------------------------

