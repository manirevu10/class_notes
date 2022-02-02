#include<iostream>
using namespace std;
class A
{
 private:
 int a;
 public:
 A()
 {
 cout << "enter a value:";
 cin >> a;
 cout << "a = " << a << endl;
 }
 A(int a)
 {
 cout << "a = " << a <<endl;
 }
};
int main()
{
 A obj;
 A obj1(5);
}
