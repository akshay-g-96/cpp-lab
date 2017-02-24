#include<iostream>
#include<algorithm>
using namespace std;
class node
{
	public:
	int info;
	node *ptr;
	node()
	{
		ptr=NULL;
		info=0;
	}
	node(int x)
	{
		info=x;
		ptr=NULL;
	}
	
};
class queue:: public node
{
	
	public:
	node *front, *rear;
	queue()
	{front=NULL;
	rear=NULL;}
	void enqueue(int x);
	void dequeue();
	void display();
};
void queue::enqueue(int x)
{
	
}
int main()
{
	queue s;
	int a;
	char y='y';
	while(y='y')
	{
		cout<<"Enter operation ... 1.enqueue... 2.dequeue... 3.display\n"
		cin>>a;
		switch(a)
		{
			case 1:int c; cout<"Enter element to be enqueued\n "<<endl;
			cin>>c; s.enqueue(c); break;
			case 2: cout<<"\nDequeued element is"<<s.dequeue()<<endl; break;
			case 3: s.display();break;
			default:cout<<"Invalid option\n"
		}
		cout<<"Do you want to continue?"<<endl;
		cin>>y;
	}
	return 0;
}
