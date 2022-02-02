#include<iostream>
using namespace std;
class Distance {
 private:
 int feet,inches;
 public:
 Distance() {}
 Distance(int f,int i) {
 feet = f;
 inches = i;
 }
 void output() {
 cout << "feets = " << feet << " inches = " << inches << endl;
 }
 void add(Distance o1, Distance o2) {
 feet = o1.feet+o2.feet;
 inches = o1.inches + o2.inches;
 feet += inches/12;
 inches %= 12;
 }
 ~Distance() {
 cout << "Distance object is destroyed\n";
 }
};
int main() {
 int f,i;
 cout << "Enter feets and inches:";
 cin >> f >> i;
 Distance obj1(f,i);
 cout << "Enter feets and inches:";
 cin >> f >> i;
 Distance obj2(f,i);
 Distance obj3;
 obj3.add(obj1,obj2);
 obj3.output();
}

