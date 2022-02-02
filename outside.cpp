#include<iostream>
using namespace std;
class print
{
	private:
		int a,b;
	public:
	void input();
	void output();	
};
void print::input()
{
	cout<<"enter a and b values:\n";
}
void print::output()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	print o1;
	o1.input();
	o1.output();	
}
