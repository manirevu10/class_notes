#include<iostream>
using namespace std;
class Distance {
 private:
 int feet,inches;
 public:
 void input() {
 cout << "Enter feet and inches:";
 cin >> feet >> inches;
 }
 void output() {
 cout << "feets = " << feet << " inches = " << inches;
 }
 void add(Distance o1, Distance o2) {
 feet = o1.feet+o2.feet;
 inches = o1.inches + o2.inches;
 feet += inches/12;
 inches %= 12;
 }
};
int main() {
 Distance obj1,obj2,obj3;
 obj1.input();
 obj2.input();
 obj3.add(obj1,obj2);
 obj3.output();
}
