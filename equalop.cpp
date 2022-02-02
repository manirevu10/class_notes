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
 void output()
 {
 cout << "a = " << a;
 }
 void operator =(Equal obj)
 {
 a = obj.a;
 }
};
int main()
{
 Equal obj1,obj2;
 obj1.input();
 obj2=obj1;
 obj2.output();
}
