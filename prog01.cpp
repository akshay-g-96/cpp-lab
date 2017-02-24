/*#include<iostream>
using namespace std;
struct complex
{
    int img;
    int real;

}c1,c2,c3;
int main()
{
    cout<<"Enter the values"<<endl;
    cin>>c1.real>>c1.img>>c2.real>>c2.img>>c3.real>>c3.img;
    cout<<"The sum of 3 complex numbers are: "<<c1.real+c2.real+c3.real<<"+i"<<c1.img+c2.img+c3.img;
    return 0;
}

#include<iostream>
using namespace std;
struct Time
{
    int sec;
    int minutes;
    int hours;

}t1,t2,t3;
int main()
{
    cout<<"Enter the time in hh:mm:ss format"<<endl;
    cin>>t1.hours>>t1.minutes>>t1.sec>>t2.hours>>t2.minutes>>t2.sec;
    cout<<"The difference between time periods are: "<<endl;
    if(t2.sec<t1.sec)
    {
        t3.sec=60-t1.sec+t2.sec;
    }
    else
    	t3.sec=t2.sec-t1.sec;
    if(t2.minutes<t1.minutes)
    {
          t3.minutes=t1.minutes+t2.minutes-1;
      }
            else
            		t3.minutes=t2.minutes-t1.minutes;
            if(t2.hours<t1.hours)
            {
                t3.hours=t1.hours+t2.hours-1;
            }
             else
           	t3.hours=t2.hours-t1.hours;
    cout<<t3.hours<<t3.minutes<<t3.sec;
    return 0;
}
*/
#include<iostream>
using namespace std;
class day_type
