#include<iostream>
using namespace std;
class base
{
 protected:
 int a;
};
class derived1 : public base
{
 protected:
 int b;
};
class derived2 : public derived1
{
 public:
 void print()
 {
 cout << "Enter a and b value:";
 cin >> a >> b;
 cout << "a = " << a << endl;
 cout << "b = " << b;
 }
};
int main()
{
 derived2 obj;
 obj.print();
}
