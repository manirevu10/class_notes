#include<iostream>
using namespace std;
class length
{
 protected:
 int l;
 public:
 length()
 {
 cout << "Enter length:";
 cin >> l;
 }
};
class breadth
{
 protected:
 int b;
 public:
 breadth()
 {
 cout << "Enter breadth:";
 cin >> b;
 }
};
class area : public length, public breadth
{
 protected:
 int a;
 public:
 area()
 {
 a = l*b;
 cout << "area = " << a << endl;
 }
};
class volume : public area
{
 private:
 int h,v;
 public:
 volume()
 {
 cout << "Enter height:";
 cin >> h;
 v = a*h;
 cout << "volume = " << v;
 }
};
int main()
{
 volume obj;
}
