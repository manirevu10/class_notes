#include<iostream>
using namespace std;
class base
{
	protected:
	int len,bre,hei;
	public:
	void getdata()
	{
		cout<<"enter length,bredth and height:";
		cin>>len>>bre>>hei;
	} 
};
class rectangle:public base
{
	public:
	void areaofrect()
	{
		getdata();
		cout<<"area of rectangle:"<<len*bre;
	}
};
class triangle:public base
{
	public:
	void areaoftri()
	{
		getdata();
		cout<<"area of triangle:"<<0.5*bre*hei;
	}
};
int main()
{
	rectangle o1;
	triangle o2;
	base*p1=&o1;
	base*p2=&o2;
	p1->getdata();
	o1.areaofrect();
	p2->getdata();
	o2.areaoftri();
}


