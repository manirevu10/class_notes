#include<iostream>
using namespace std;
class base
{
 public:
 virtual void display1()
 {
 cout << "base class display function called\n";
 }
};
class derived:public base
{
 public:
 void display1()
 {
 cout << "derived class display function called\n";
 }
};
int main()
{
 base b1;
 derived d1;
 base *ptr;
 ptr=&b1;
 ptr->display1();
 ptr=&d1;
 ptr->display1();
}
