#include<iostream>
using namespace std;
class base
{
 public:
 void getbasedata()
 {
 cout << "baseclass";
 }
};
class der1: virtual public base
{

};
class der2: virtual public base
{

};
class der3 : public der1, public der2
{

};
int main()
{
 der3 obj;
 obj.getbasedata();
}
