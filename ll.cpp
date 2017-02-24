#include<iostream>
using namespace std;
class node
{
		
	public:node *next;
		int data;
		node(){next=NULL;}
		node(int x)
		{
			data=x;
			next=NULL;
		}
};
class list
{
	
	public:node *head,*tail;
	int data;
	     list()
	     {head=NULL;                                             
	     tail=NULL;}
		void insertfront(int e)
		{
			node *temp=new node(e);
			if(head==tail)	{tail=temp; head=temp           ;} 
					else
			{temp->next=head;
			head=temp;}
		}
		void insertback(int e)
		{
			node *temp=new node(e);
			/*if(head==tail)
			{head=temp;
			tail=temp;}
			else*/
			 tail->next=temp;
			   tail=temp;
		}
		void display()
		{
			node *t=head;
		
			while(t!=NULL)
			{cout<<t->data;
			t=t->next;}
		}
		void deletefront()
		{
		
		}
};int main()
{
	list l;
	l.insertfront(1);l.insertfront(4);
	l.insertback(2);
	l.insertback(3);
	
	l.display();
	return 0;

}
