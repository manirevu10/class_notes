#include<iostream>
using namespace std;
class B;
class A
{
 private:
 int a;
 public:
 A()
 {
 cout << "Enter a value:";
 cin >> a;
 }
 friend void compare(A,B);
};
class B
{
 private:
 int b;
 public:
 B()
 {
 cout << "Enter b value:";
 cin >> b;
 }
 friend void compare(A,B);
};
void compare(A o1, B o2)
{
 if(o1.a>o2.b)
 {
 cout << o1.a << " is greater than " << o2.b;
 }
 else if(o1.a<o2.b)
 {
 cout << o2.b << " is greater than " << o1.a;
 }
 else
 {
 cout << o1.a << " is equal to " << o2.b;
 }
}
int main()
{
 A o1;
 B o2;
 compare(o1,o2);
}
