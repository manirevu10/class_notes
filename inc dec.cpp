#include<iostream>
using namespace std;
class op
{
 private:
 int a;
 public:
 op()
 {
 cout << "Enter a value:";
 cin >> a;
 }
 void operator +()
 {
 cout <<"unary plus operator : " << +a << endl;
 }
 void operator -()
 {
 cout << "unary minus operator : " << -a << endl;
 }
 void operator ++()
 {
 cout << "Incrementing a : " << ++a << endl;
 }
 void operator --()
 {
 cout << "Decrementing a : " << --a << endl ;
 }
};
int main()
{
 op obj;
 +obj;
 -obj;
 ++obj;
 --obj;
}
