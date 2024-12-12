#include<iostream>
#define MAX 10
using namespace std;

class PizzaParlour
{
	int front,rear;
	int a[MAX];
	public:
		PizzaParlour()
		{
			front=rear=-1;
		}
		int addOrder(int data);
		void serveOrder();
		void display();
};
int PizzaParlour::addOrder(int id)
{
 	if(rear==-1)
 	{
 		front=rear=0;
 		a[rear]=id;
 		return true;
	 }
	 else
	 {
	 	int pos=(rear+1)%MAX;
	 	if(pos==front)
	 	{
	 		cout<<"\nCafe is Full.Please wait.\n";
	 		return false;
		 }
		 else
		 {
		 	rear=pos;
		 	a[rear]=id;
		 	return true;
		 }
	 }
 }
 
 void PizzaParlour::serveOrder()
 {
 	if(front==-1)
 	{
 		cout<<"\n No Orders in Cafe.[Cafe is Empty)\n";
 		return;
	 }
	 else
	 {
	 	cout<<"\n Order No. "<<a[front]<<" is processed.\n";
	 	if(front==rear) //only one order
	 	{
	 		front=rear=-1;
		 }
		 else
		 {
		 	front=(front+1)%MAX;
		 }
	 }
 }
 
 void PizzaParlour::display()
 {
 	int i=0;
 	if(front==-1)
 	{
 		cout<<"\nCafe is Empty.No orders.\n";
 		return;
	 }
	 else
	 {
	 	cout<<"Order Id's: \n";
	 	for(i=front;i!=rear;i=((i+1)%MAX))
	 	{
	 		cout<<a[i]<<"  ";
		 }
		 cout<<a[rear];
	 }
 }
 
 int main()
 {
 	int ch,id=0;
 
	PizzaParlour q;

	do
	{
		cout<<"\n----PIZZAPARLOUR-------------";
		cout<<"\n****Menu*****\n";
		cout<<"1. Accept order\n";
		cout<<"2. Serve order\n";
		cout<<"3. Display orders\n";
		cout<<"4. Exit";

		cout<<"\nChoice: ";
		cin>>ch;

		switch(ch)
		{
		case 1: 
				id++;
				if(q.addOrder(id))
				{
					cout<<"Thank you for order.Order id is : "<<id;
				}
				else
				{
					id--;
				}
				break;

		case 2: q.serveOrder();
				break;

		case 3: q.display();
				break;
		}
	}while(ch!=4);
	cout<<"\nThank You.Keep Visiting.";

 }
