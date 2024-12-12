 #include<iostream>
 #define MAX 10

  int queue[MAX],front,rear;
  int empty();
  int full();
  void add();
  void del();
  void display();

  void main()
     {
       int x;
       front=1;
       rear=0;
            
       do
	 {
	   cout<<"\n*******MENU*******";
	   cout<<"\n<1>ADD JOB";
	   cout<<"\n<2>DELETE JOB";
	   cout<<"\n<3>DISPLAY JOB DATA";
	   cout<<"\n<4>EXIT\n";
	   cout<<"\nENTER YOUR CHOICE:=";
           cin>>x;
	   switch(x)
	      {
		case 1 : add();
			 break;
		case 2 : del();
			 break;
		case 3 : display();
			 break;
		case 4 : goto lable;
		default : cout<<" wrong choice!!!";
	      }
	   cout<<"\n\nDo u want to cntinue[y/n]? ";
	 }
       while(getche()!='n');
       lable : getch();
     }

  int full()
      {
	if(rear==MAX-1)
	return(1);
	else
	return(0);
       }
  int empty()
      {
	if(front>rear)
	return(1);
	else
	return(0);
      }
  void add()
       {
	 int x;
	 do
	   {
	     if(full()==1)
	     cout<<" queue is full";
	     else
	       {
		 rear=rear+1;
		 cout<<"\n\nENTER THE JOB DATA:=";
		 cin>>x;
		 queue[rear]=x;
	       }
	     cout<<"\nDo u want to add more elements[y/n]?:=";
	   }
	 while(getche()!='n');
       }
  void del()
       {
	 do
	   {
	     if(empty()==1)
	     cout<<"\nSorry can not delete element as queue is empty";
	     else
	       {
		 cout<<"\n\nThe element to be deleted is %d",queue[front];
		 front=front+1;
	       }
	     cout<<"\n\nDo u want to delete more element[y/n]?:= ";
	   }
	 while(getche()!='n');
       }

  void display()
     {
       int i;
       if(empty()==1)
       cout<<"\nQueue is empty";
       else
	 {
	   cout<<"\nThe elements in queue are:=";
	   for(i=front;i<=rear;i++)
	   cout<<queue[i];
	 }
       
     }















