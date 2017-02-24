#include<iostream>
using namespace std;
class shape 
{
	
	public:
		int x,y,z;
		 void getvalue(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
			
		}
		virtual void display_area()=0;
	
};
class shape1
{
		public:
		int x,y,z;
		 void getvalue(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
			
		}
	
		virtual void display_volume()=0;
};
class twodim:public shape
{
	public:
		void display_area()
		{
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
		}
};
class threedim:public shape1
{
	public:
		void display_volume()
		{
			cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
		}
};
class triangle:public twodim
{
	public:
		void display_area()
		{
			cout<<"Area="<<0.5*x*y<<endl;
		}
};
class rectangle:public twodim
{
	public:
		void display_area()
		{
			cout<<"Area="<<x*y<<endl;
		}
};
class box:public threedim
{
	public:
		void display_volume()
		{
			cout<<"Volume="<<x*y*z<<endl;
		}
};
class cone:public threedim
{
	public:
		void display_volume()
		{
			cout<<"Volume="<<(1/3)*3.14*x*z<<endl;
		}
};
class cylinder:public threedim
{
	public:
		void display_volume()
		{
			cout<<"Volume="<<2*3.14*x*x*z<<endl;
		}
};
int main()
{
	shape* p;
	shape1* l;
	twodim q;
	
	threedim w;
	triangle e;
	rectangle r;
	box t;
	cone y;
	cylinder u;
	
	//p=&s;
	//p->getvalue(0,0,0);
	p=&q;
	p->display_area();
	l=&w;
	l->display_volume();
	p=&e;
	p->getvalue(1,1,0);
	p->display_area();
	p=&r;
	p->getvalue(1,1,0);
	p->display_area();
	l=&t;
	l->getvalue(1,1,1);
	l->display_volume();
	l=&y;
	l->getvalue(1,1,1);
	l->display_volume();
	l=&u;
	l->getvalue(1,1,1);
	l->display_volume();
	return 0;
}
