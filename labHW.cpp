 /*#include<iostream>
using namespace std;
class daytype
{
	public:
		
		int n;
		int num;
		enum day {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
		day d1;
		void setday()
		{
			cout<<"Enter a value corresponding to a day (starting from monday)"<<endl;
			cin>>n;
			num=n+1;
		}
		void printday()
		{
			cout<<d1(n);
		}
		void returnnext()
		{
			if (num<7)
			cout<<d1(num);
			if(num==7)
			cout<<d1(0);
		}
		void returnprevious()
		{
			if(num>1)
			cout<<d1(n-1);
			if(num==1)
			cout<<d1(6);
		}
	
};
int main()
{
	daytype d;
	d.setday();
	d.printday();
	d.returnnext();
	d.returnprevious();
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int n,count=0,j,i;
	cout<<"Enter a string"<<endl;
	cin.getline(a,100);
	cout<<"The number of occurance of the word 'the' is:"<<endl;
	for(i=1;a[i]!='\0';i++);
	n=i;
	for(j=0;j<n;j++)
	{
		if(a[j]=='t'&&a[j+1]=='h'&&a[j+2]=='e')
		{count=count+1;}
	}
	
	cout<<count;
	return 0;
}	//exercise 2-1 */
/*#include<iostream>
using namespace std;
void merge(int a[10],int b[10])
{
	int i,c[20];
	for(i=0;i<10;i++)
		c[i]=a[i];
	for(i=10;i<20;i++)
		c[i]=b[i-10];
	cout<<"The merged array is:"<<endl;
	for(i=0;i<20;i++)
	cout<<c[i];
}
void sort(int a[10],int b[10])
{
	int i,j,temp,c[20];
	for( i=0;i<20;i++)
	{
		for(j=1;j<20;j++)
		{
			if(c[j]>=c[i])
			{
				temp=c[j];
				c[j]=c[i];
				c[i]=temp;
			}
		}
	}
	cout<<endl<<"The sorted array is :"<<endl;
	for (i=0;i<20;i++)
	cout<<c[i];
}
int main()
{ 
	int a[10],b[10],c[20],i,j;
	cout<<"Enter arrays a and b:"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	for(j=0;j<10;j++)
	cin>>b[j];
	merge(a,b);
	sort(a,b);
	return 0;
} 
#include<iostream>
using namespace std;
void operation(int a,int b,char x)
{
	if(x=='A')
	cout<< a+b;
	else if(x=='S')
	cout<<a-b;
	else if(x=='M')
	cout<<a*b;
	
}
int main()
{
	int a,b;
	char x;
	cout<<"Enter 2 integers:"<<endl;
	cin>>a>>b;
	cout<<"Enter operation to be performed (addition-a;subtraction-s;multiplication-m):"<<endl;
	cin>>x;
	operation(a,b,x);
	return 0;
}*/
/*#include<iostream>
using namespace std;
class person
{
	public:
		char name[10];
		int ssn;
		char city[10];
		int phone;
		static int count;
		person()
		{
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter ssn"<<endl;
			cin>>ssn;
			cout<<"Enter city"<<endl;
			cin>>city;
			cout<<"Enter phone number"<<endl;
			cin>>phone;
			
		}
		void disp()
		{
			cout<<"Name:"<<name<<endl;
			 cout<<"Ssn:"<<ssn<<endl;
			 cout<<"city:"<<city<<endl;
			 cout<<"Phone number:"<<phone<<endl;
		}
		static void display()
		{
			 
			 count=count+1;
			 cout<<count;
			
		}
		
		
};
int person::count;
int main()
{
	int i;
	
	person p[5];
	for(i=0;i<5;i++)
	{
		p[i].disp();
		 person::display();
	}
	
	return 0;
	

}*/
/*#include<iostream>
using namespace std;
class matrix
{
	public:
	int a[2][2];
	int m,n;
	
		matrix()
		{
			cout<<"Enter matrix"<<endl;
			for(m=0;m<2;m++)
			{
				for(n=0;n<2;n++)
				{
					cin>>a[m][n];
				}
			}
			
			
		}
		void friend add();
};
void add(matrix m1,matrix m2)
{
	
	int m,n;
	for(m=0;m<2;m++)
			{

				for(n=0;n<2;n++)
				{
					m1.a[m][n]=m1.a[m][n]+m2.a[m][n];
				}
			}
	for(m=0;m<2;m++)
	{
		for(n=0;n<2;n++)
		{
				cout<<m1.a[m][n];
		}
	}

			
}
int main()
{
	int c[2][2],d[2][2],m,n;
	matrix m1,m2;
    add(m1,m2);
    return 0;
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
class Name
{
	int i;
	
	public:
	string c;
	char b[10],a[10];
		Name(){
		}
		Name(char a[10])
		{
			for(i=0;i<10;i++)
			b[i]=a[i];
			
		}
		string const operator + (Name last_name)
		{
			
			return(strcat(b,last_name.b));
			
		
		}
};
int main()
{
	Name first_name("ABC"),last_name("DEF"),full_name;
	full_name.c=first_name+last_name;
	cout<<full_name.c;
	return 0;
	
}*/
/*#include<iostream>
using namespace std;
class matrix
{
	public:
		int x[2][2],c[2][2];
		matrix(int a)
		{
			int i,j;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				x[i][j]=0;
			}
		}
		matrix()
		{
			int i,j;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				cin>>x[i][j];
			}
		}
		void operator +(matrix B)
		{
			int i,j;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				x[i][j]=x[i][j]+B.x[i][j];
			}
			
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				cout<<x[i][j]<<"\t";
			}
			cout<<endl;
		}
		void operator -(matrix B)
		{
			int i,j;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				c[i][j]=x[i][j]-B.x[i][j];
			}
			
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		}
		void operator *(matrix B)
		{
				int i,j,k;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
				c[i][j]=0;
				for (k=0;k<2;k++)
				c[i][j]=c[i][j]+x[i][k]*B.x[k][j];}
			}
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
			
		}
		
};
int main()
{
	matrix A,B,C(0);
	A*B;
	A-B;
	A+B;
	return 0;	clocktype()
		{
			cout<<"Enter the time :"<<endl;
			cin>>hh>>mm>>ss;
			
		}
}*/
/*#include<iostream>
using namespace std;
class clocktype
{
	public:
	int hh,mm,ss,x;
	
		clocktype(){
		}
		friend ostream & operator <<(ostream & output, clocktype & t);
		friend istream & operator >>(istream & input, clocktype &t);
		friend clocktype operator ++ (clocktype t);
		friend clocktype operator --(clocktype t,int x);
		clocktype operator +=(clocktype t)
		{
			hh=hh+t.hh;
			mm=mm+t.mm;
			ss=ss+t.ss;
			return *this;
		}
		void operator ==(clocktype t)
		{
			if(hh==t.hh && mm==t.mm && ss==t.ss)
			cout<<"Times are same"<<endl;
			else
			cout<<"Times are different";
		}
	    clocktype operator () (int h,int m,int s)
	    {
	    	hh=h;
	    	mm=m;
	    	ss=s;
	    	return *this;
		}
		
};
ostream & operator <<(ostream & output, clocktype&t)
{
	output<<t.hh<<t.mm<<t.ss;
	return output;
}
istream & operator >>(istream & input, clocktype&t)
{
	input>>t.hh>>t.mm>>t.ss;
	return input;
}
clocktype operator ++ (clocktype t)
		{
			clocktype T;
			T.hh=t.hh;
			T.mm=t.mm;
			T.ss= ++t.ss;
			return T;
		}
clocktype operator --(clocktype t, int x)
		{
			clocktype T;
			T.hh=t.hh;
			T.mm=t.mm;
			T.ss= t.ss--;
			return T;
		}
int main()
{
	int a,b,c,d,e,f;
	cout<<"Enter 2 times"<<endl; 
	cin>>a>>b>>c>>d>>e>>f;
	clocktype t,t1,t3,t2;
	t(a,b,c),t1(d,e,f);
	t3= ++t;
	t2= t--;
	cout<<"Next, Time is "<<endl<<t3.hh<<t3.mm<<t3.ss<<endl;
	cout<<"Previously time was"<<endl<<t2.hh<<t2.mm<<t2.ss<<endl;
	t+=t1;
	cout<<"The sum of time is "<<t.hh<<t.mm<<t.ss<<endl;
	t==t1;
	return 0;
	
}*/
/*The class Shape has 3 data members x,y and z and a member function getvalue() to get values for the data members. The function should have default arguments with a value of 0. It also contain 2 pure virtual member functions display_area() and display_volume().
The class Twodimensional contains a member function display_area() that displays the values of x and y.
The class Threedimensional contains a member function display_volume() that displays the value of x,y and z.
The classes Triangle and Rectangle contains a display_area() function each, which calls the getdata() to get the sides, and calculate and display the area.
The classes Box, Cone and Cylinder contains a display_volume() function each, which calls the getdata()to get the sides, and calculate and display the volume.
In main(), create a pointer to the class Shape, and use this pointer to access all the necessary functions. (Run time polymorphism).
Volume of a cone= 
Volume of cylinder = 

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
*/
/*#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()=0;
		virtual void display()=0;
};
class der1:public base
{
	public:
		void show()
		{
			cout<<"hbdhgv";
		}
};
class der2:public base
{
	public:
		void show ()
		{
			cout<<"ttf";
		}

};
int main()
{
	base* list[2];
	der1 d1;der2 d2;
	d1.show();
	d2.show();
	list[0]=&d1;
	list[0]->show();
	return 0;
}class shape 
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

*/

/*#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	int i;
	char a[150][100];
	ifstream in1("HELLO123.txt");
	if(!in1)
	cout<<"invalid";
	for(i=1;a[i][100]!='\0';i++)
	in1.read((char*)&a[i][100],sizeof(a[i][100]));
	//getline(example1,100);
	in1.close();
	ofstream out("HELLO.txt");
	for(i=1;a[i][100]!='\0';i++)
	out.write((char*)&a[i][100],sizeof(a[i][100]));
	out.close();
	ifstream in("HELLO.txt");
	if(!in)
	cout<<"invalid";
	for(i=1;a[i][100]!='\0';i++)
	in.read((char*)&a[i][100],sizeof(a[i][100]));
	//	getline(example1,100);
//	in>>"hello";
	in.seekg(0,ios::beg);
	in.close();
	
	return 0;
}

*/
/*#include <iostream>
#include<fstream>
using namespace std;
class goods
{
	public:
	int stk_no,price,quantity;
	void input()
	{
		cout<<"Enter stock_numbers, price, quantity"<<endl;
		cin>>stk_no>>price>>quantity;
	}
};
int main()
{
	int x;
	goods g[10];
	for ( x=0;x<10;x++)
	{g[x].input();
	}
	ofstream out;
	out.open("stock.txt");
//	int stk_no,price,quantity;
	for(x=0;x<10;x++)
	{out<<"Stock number \t "<<g[x].stk_no<<endl<<"Price \t "<<g[x].price<<endl<<"Quantity \t "<<g[x].quantity<<endl;
	}
	out.close();
	ifstream in;
	in.open("stock.txt");
	if(!in)
	{
		cout<<"Error";
	}
	for(x=0;x<10;x++)
	{
		in>>g[x].stk_no;
		cout<<endl<<"Stock number \t "<<g[x].stk_no;
		in>>g[x].price;
		cout<<endl<<"Price \t "<<g[x].price;
		in>>g[x].quantity;
		cout<<endl<<"Quantity \t "<<g[x].quantity;
		
	}
	in>>g[1].price;
	in.seekg(0,ios::beg);
	in.close();
	return 0;
}

*/
/*#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string a;int i;char x;
	ofstream out("text.txt");
	do
	{
		cin>>a;
		out.write((char*)&a,sizeof(a));
	  	
	}while(!EOF);
	out.close();
	ifstream in("text.txt");
	if(!in)
	{
		cout<<"Error";
	}
	for(i=0;!EOF;i++)
	{
		in.read((char*)&a,sizeof(a));
	}
	in.seekg(0,ios::beg);
	in.close();
	return 0;
}*/

/*//Write a C++ program that reads a file which contains a string in it. Using the file pointer manipulation functions,
// replace the occurrence of character 'a' with character 'X'. Read and display the contents of the file.
*/
/*#include<iostream>
#include<fstream>
using namespace std;
class file
{
	char *a;
	public:
		file()
		{
			ifstream fio("HELLO123.txt",ios::in);
			if(fio==0)
			{
				cout<<"cant open";
				
			}
			int m=1;
			while(fio)
			{
				fio.getline(a,80);
				cout<<m<<"\t";
				cout<<a;
				++m;
			}
		}
};
int main ()
{
	file a;
}
*/
/*#include<iostream>
using namespace std;
class inventory
{
	public:
	int stock;
	float num;
	double price;
	void setval()
	{
		cout<<"Enter stock number, quantity, price"<<endl;
		cin>>stock>>num>>price;
		
	}
	void conditions1()
	{
		if(stock<0 || stock>999)
		throw 1;
		
	}
		void conditions2()
	{
		
		if(num<0 )
		throw 2;
		
	}
		void conditions3()
	{
	
		if(price<100)
		throw 3;
	}
	void display()
	{
		cout<<stock<<endl<<num<<endl<<price;
	}
};
int main()
{
	inventory i;int y;
	i.setval();
	try	{
		i.conditions1();}
		catch(int y)
	{
		if(y==1)
		{
			cout<<"Invalid no";
			cin>>i.stock;
		}
		
	}
		try
		{i.conditions2();
		}
		catch(int y)
	{
		
		 if(y==2)
		{
			i.num=0;
		}
	
	}
		try{
		
		i.conditions3();
	}
	catch(int y)
	{
	
		 if(y==3)
		{
			i.price=99.99;
		}
	}
	i.display();
	return 0;
}
*/
/*#include<iostream>
#include<fstream>
using namespace std;
class item
{
	public:
		
		int stock, price, num;
		void setval()
		{
			cout<<"Enter stock no, price, quantity"<<endl;
			cin>>stock>>price>>num;
			
			
		}
		
};
int main()
{
	fstream io;
	io.open("stock123.txt",ios::in|ios::out);
	int x;
	item i[10];
	for(x=0;x<10;x++)
	{
		i[x].setval();
		io<<i[x].stock<<i[x].price<<i[x].num;
	}
	for(x=0;x<10;x++)
	{io>>i[x].stock>>i[x].price>>i[x].num;
		cout<<i[x].stock<<i[x].price<<i[x].num;
	}
	
		io.close();
		return 0;
}
*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main()
 {
 	char a[100];int i;
 	fstream io("eg",ios::in|ios::out);
	 if(!io)
	 cout<<"error";
	 //io.seekg(0,ios::beg);
	 //
	 
	
	/* for(int i=0;a[i]!=EOF;i++)
	 {
	 //io.read((char*)&a[i],sizeof(a[i]));
	 //	io>>a[i];
	 cout<<a[i];
	 	}	*/
	/* 	getline(eg,50);
	for(int i=0;a[i]!=EOF;i++)
	{
	 //
		{if(a[i]=='a')
		//io.seekg(-1,ios::cur);
		
	 		a[i]='x';
		} 
	//	cout<<a[i];
	 } 
	 for(i=0;a[i]!=EOF;i++)
	 io<<a[i];
	//io.seekg(0,ios::beg);
	 io.close();
	 return 0;
}*/
