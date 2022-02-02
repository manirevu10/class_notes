#include<iostream>
using namespace std;
class base1
{
 protected:
 int a;
};
class base2
{
 protected:
 int b;
};
class base3
{
 protected:
 int c;
};
class derived : public base1 , public base2, public base3
{
 public:
 void print()
 {
 cout << "Enter a,b and c value:";
 cin >> a >> b >> c;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;
 }
};
int main()
{
 derived obj;
 obj.print();
}
