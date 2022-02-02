#include<iostream>
using namespace std;
class base
{
 public:
 base()
 {
 cout << "It's a vechicle\n";
 }
};
class two : public base
{
 public:
 two()
 {
 cout << "It's a two wheeler vechicle\n";
 }
};
class three : public base
{
 public:
 three()
 {
 cout << "It's a three wheerler vechicle\n";
 }
};
int main()
{
 two obj1;
 three obj2;
}
