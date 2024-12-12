#include<iostream>
using namespace std;
#define size 20
//-----------------------------------------------------
int insert(int que[20],int rear,int front)
{
	int x,j;
	cout<<"\n\nENTER THE ELEMENT: ";
	cin>>x;
	if(front==-1)
	front++;
	j=rear;
	while(j>=0 && x<que[j])
	{

	que[j+1]=que[j];
	j--;
	}
	que[j+1]=x;
	rear=rear+1;
	return rear;
}
int Qfull(int rear)
{

	if(rear==size-1)
 	cout<<"\nQUEUE IS FULL";
	return 0;
}
int delet(int que[20],int front)
{
	int x;
	x=que[front];
	cout<<"\n DELETED ELEMENT IS:  "<<x;
	front++;
	return front;
}
void display(int que[20],int rear,int front)
{	 int i;
        cout<<"\n\n\tQUEUE DATA IS:";
	for(i=front;i<=rear;i++)
	{
	cout<<"	\t"<<que[i];
	}
}
int Qempty(int rear,int front)
{

if(front==-1||front>rear)
return 1;
else 
return 0;
}


int main()
{
int rear,front,que[20],choice;
int insert(int que[20],int rear,int front);
int Qfull(int rear);
int Qempty(int rear,int front);
int delet(int que[20],int front);
void display(int que[20],int rear,int front);
char ans;
int ch;
front=0;
rear=-1;
do
{
	cout<<"\n\t\t ****PRIORITY QUEUE**********\n";
	cout<<"\n1.INSERT";
	cout<<"\n2.DELETE";
	cout<<"\n3.DISPLAY";
	cout<<"\nENTER YOUR CHOICE\n";
cin>>ch;
	switch(ch)
	{
		case 1:if(Qfull(rear))
			cout<<"QUEUE IS FULL\n";
		    else
			rear=insert(que,rear,front);
			break;
		case 2:if(Qempty(rear,front))
			cout<<"QUEUE IS EMPTY\n";
		    else
			front=delet(que,front);
			break;
		case 3:
			display(que,rear,front);
			break;
		default:
			break;
	}
		cout<<"\n DO YOU WANT TO CONTINUE?";
		cin>>ans;
}
while(ans=='y'||ans=='Y');
}
