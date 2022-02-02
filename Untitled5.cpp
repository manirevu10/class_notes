#include<iostream>
using namespace std;
class Equal
{
 private:
 int a;
 public:
 void input()
 {
 cout << "Enter a value:";
 cin >> a;
 }
 void operator ==(Equal obj)
 {
 if(a == obj.a)
 {
 cout << "two objects are equal\n";
 }
 else
 {
 cout << "two objects are not equal\n";
 }
 }
};
int main()
{
 Equal obj1,obj2;
 obj1.input();
 obj2.input();
 obj1==obj2;
}
