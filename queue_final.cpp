#include<iostream>
#define N 5
using namespace std;
class queue
{
	int f,r,q[5],n;
	public:
		queue()
		{
			f=-1;
			r=-1;
		}
		int enqueue(int n)
		{
			if(r==N-1)
			{
				cout<<"Queue overflow"<<endl;
			}
			else
			{
				r++;
				q[r]=n;
			}
		}
		int dequeue()
		{
			if(f==-1)
			{
				cout<<"Queue underflow"<<endl;
			}
			else
			{
				int temp;
				f++;
				temp=q[f];
				return temp;
			}
		}
		void display()
		{
			int i;
			cout<<"the elements of queue are\n";
			for(i=f;i<r;i++)
			{
				cout<<q[i]<<'\t';
			}
			cout<<'\n';
		}
};

int main()
{
	queue s1;
	char a='y';
	while(a=='y')
	{
		cout<<"enter the operations to be performed on the queue\n"<<"1.enqueue\t2.dequeue\n3.display\n";
		int l;
		cin>>l;
		switch(l)
		{
			case 1:cout<<"enter the element to be added\n";int b;cin>>b;s1.enqueue(b);break;
			case 2:int c;c=s1.dequeue();cout<<c<<"element is removed\n";break;
			case 7:	s1.display();break;
		}
		cout<<"do you wish to continue\n yes or no\n";
		cin>>a;
	}
	return 0;
}	

