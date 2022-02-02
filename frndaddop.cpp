#include<iostream>
using namespace std;
class add
{
 private:
 int a;
 public:
 void input()
 {
 cout << "Enter a value:";
 cin >> a;
 }
 friend void operator +(add ,add);
};
void operator +(add o1,add o2)
{
 cout << "addition of two objects = " << o1.a+o2.a;
}
int main()
{
 add obj1,obj2;
 obj1.input();
 obj2.input();
 obj1+obj2;
}
