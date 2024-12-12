#include<iostream>
#include<string.h>
#define MAX 20
using namespace std;
int top = -1;
int stack[MAX];


char push(char item)
{
if(top == (MAX-1))
cout<<"Stack Overflow\n";
else
 {
  top=top+1;
  stack[top] = item;
 }
}

char pop()
{
if(top == -1)
cout<<"Stack Underflow\n";
else
return(stack[top--]);
}
int main()
{
char exp[MAX],temp;
int i,valid=true;
cout<<"Enter an algebraic expression : ";
cin>>exp;
for(i=0;i<strlen(exp);i++)
{
 if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
   push( exp[i] );
if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
 if(top == -1)    /* stack empty */
 valid=false;
else
{
 temp=pop();
 if( exp[i]==')' && (temp=='{' || temp=='[') )
 valid=false;
 if( exp[i]=='}' && (temp=='(' || temp=='[') )
 valid=false;
 if( exp[i]==']' && (temp=='(' || temp=='{') )
valid=false;
}
  }
if(top>=0) /*stack not empty*/
valid=false;
if( valid==true )
cout<<"Valid expression\n";
else
cout<<"Invalid expression\n";
}
