/*
#include<iostream>
using namespace std;
class node
{
		public:
    int data;
    node *next;
    node()
    {
    	data=0;
    	next=NULL;
	}
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
class stack:public node
{
    node *top;
    public:
    stack() 
    {
        top=NULL;
    }
    void push(int x)
	{
   	 	node *ptr=new node(x);
   	 	cout<<"\nPUSH Operation\n";
    	if(top!=NULL)
    	    ptr->next=top;
    	top=ptr;
    	cout<<"\nNew item is inserted to the stack!!!";

	}

    void pop()
	{
    	node *temp;
    	if(top==NULL)
    	{
    	    cout<<"\nThe stack is empty!!!";
    	}
    	temp=top;
    	top=top->next;
    	cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
    	delete temp;
	}

    void show()

	{
    	node *ptr1=top;
    	cout<<"\nThe stack is\n";
    	while(ptr1!=NULL)
    	{
    	    cout<<ptr1->data<<" ->";
    	    ptr1=ptr1->next;
    	}
    	cout<<"NULL\n";
	}
};
int main()
{
    stack s;
    int choice;
    while(1)
    {
        cout<<"\nSTACK USING LINKED LIST\n";
        cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT";
        cout<<"\nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:int y;
            		cout<<"Enter element to be inserted\n"; cin >>y;
                s.push(y);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}*/
#include<iostream>
#define max 5
using namespace std;
class node
{
      public:
             node *next;
             int data;
             node()
             {
             	data=0;
             	next=NULL;
			 }
			 node(int x)
			 {
			 	data=x;
			 	next=NULL;
			 }
};
 
class queue : public node
{
            node *head;
            int front,rear;
	public:
           queue()
		   	{
            	front=-1;
             	rear=-1;
            }
           void enqueue(int x)
           	{
            	if (rear<0)
             		{
               			head =new node(x);
                     	rear ++;
                     }
            	 else
                    {
                    	node *temp,*temp1;
                     	temp=head;
                      	if(rear>=max)
                          {
                          	cout <<"QUEUE OVERFLOW\n";
                           	return;
                           }
                        rear++;
                        while(temp->next != NULL)
                        	temp=temp->next;
                        temp1=new node;
                        temp->next=temp1;
                        temp1->next=NULL;
                        temp1->data=x;
                    }  
				}
 
           void display()
           	{
              node *temp;
              temp=head;
              if (rear<0)
                {
                    cout <<" QUEUE UNDERFLOW\n";
                    return;
                 }
              while(temp != NULL)
               {
               	   cout <<temp->data<< "->";
                   temp=temp->next;
                }
                cout<<"NULL";
             }
             void dequeue()
              {
              	node *temp;
               	temp=head;
                if( rear < 0)
                  {
                  	cout <<"QUEUE UNDERFLOW";
                   	return;
                   }
                if(front == rear)
                  {
                  	front = rear =-1;
                   	head=NULL;
                    return;
                   }
                front++;
                head=head->next;
                }
};
main()
{
	queue s1;
	int ch;
	while(1)
      {
		cout <<"\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n Enter your choice:\n";
		cin >> ch;
		switch(ch)
		{
            case 1:
                 	cout <<"Enter an element\n";
                  	cin >> ch;
                   	s1.enqueue(ch); break;
 
            case 2: s1.dequeue();break;
            case 3: s1.display();break;
        	case 4: return(0);
		  }
       }
return (0);
}
