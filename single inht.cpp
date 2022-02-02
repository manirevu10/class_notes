#include<iostream>
using namespace std;
class base
{
 protected:
 int a;
};
class derived : public base
{
 public:
 void print()
 {
 cout << "Enter a value:";
 cin >> a;
 cout << "a = " << a;
 }
};
int main()
{
 derived obj;
 obj.print();
}
