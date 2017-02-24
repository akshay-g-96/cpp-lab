//lab 04 n 05 ep1
/*#include<iostream>
#include<iomanip>
using namespace std;
class quotient
{
	int a,b;
	float c;
	public:
		void accept()
		{
			cout<<"Enter two values:"<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<setw(10)<<(float)a/b;
		}
};
int main()
{
	quotient q;
	q.accept();
	q.display();
	return 0;
}*/
/*#include<iostream>
using namespace std;
class person_type
{
	int i,j,k;
	char a[15],b[15],c[30];
	public:
		void getfirstname(char a[15])
		{
			cout<<"Enter first name"<<endl;
			cin.getline(a,15);
		}
		void getlastname(char b[15])
		{
			cout<<"Enter last name"<<endl;
			cin.getline(b,15);
		}
		void setname(char a[15],char b[15])
		{
			cout<<"Name is:"<<endl;
			for(i=0;a[i]!='\0';i++)
				c[i]=a[i];
			for(j=0;a[j]!='\0';j++)
				c[i+j+1]=b[j];
			for(k=0;k<=i+j+1;k++)
			cout<<c[k];
			
		}
};
int main()
{
	char a[15],b[15];
	person_type p;
	p.getfirstname(a);
	p.getlastname(b);
	p.setname(a,b);
	return 0;
}*/
/*#include<iostream>
using namespace std;

class students
{
	int m1,m2,m3;
	float a,average;
	public:
		void read()
		{
			cout<<"Enter marks in 3 subjects"<<endl;
			cin>>m1>>m2>>m3;
		}
		int avg(int s[i].read)
		{
				a=(float)((m1+m2+m3)/3);
				return a;
		}
		/*void finalavg(int average)
		{
			
			cout<<average;for(i=0;i<5;i++)
	s[i].avg();
		}*/
/*};
int main()
{
	int i,tot=0,average;
	students s[5];
	for(i=0;i<5;i++)
	s[i].read();
	
	for(i=0;i<5;i++)
	tot=tot+s[i].avg(s[i].read);
	aveusing anmesoace std;rage=tot/5;
	cout<<average;
	return 0;
	
}*/
/*#include<iostream>
using namespace std;
class salesperson;
class sales
{
	public:
		char x;
		int date;
		int amount;
		int id;
		int t;
		sales()
		{
			cout<<"Enter date,amount,id"<<endl;
			cin>>date>>amount>>id;
		}
		void transaction()
		{
			
			cout<<"Enter option (w) for withdraw and (d) for deposit:"<<endl;
			cin>>x;
			cout<<"enter transaction amount"<<endl;
			cin>>t;
			if(x=='w')
			amount-=t;
			if(x=='d')
			amount+=t;
			
		}
		friend void print();
};
class salesperson
{
	public:
		int id;
		char last[10];
		void accept()
		{
			cout<<"Enter last name:"<<endl;
			cin>>last;
		}
		friend void print();
		
};
void print(sales s[5],salesperson s1[5])
{
	int q;
	for(q=0;q<5;q++)
	cout<<"Details:"<<s1[q].last<<endl<<s[q].id<<endl<<s[q].date<<endl<<s[q].amount<<endl;
}
int main()
{
	char last[10];
	int id,date,amount,z;
	sales s[5];
	salesperson s1[5];
	for(z=0;z<5;z++)
	{	s[z].transaction();
		s1[z].accept(); }
	print(s,s1);
	return 0;
}*/
