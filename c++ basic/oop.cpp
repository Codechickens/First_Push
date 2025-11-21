#include <bits/stdc++.h>
using namespace std;

class Student{
private:
   string name;
   int age;
   double height;

public:
   Student(string n, int a, double h) {
      name = n;
      age = a;
      height = h;

   };
   void display() {
      cout<<name<<endl;
      cout<<age<<endl;
      cout<<height<<endl;

   }

};

int main() {
   Student no1("Vu Le Kien", 18, 1.65);
   Student no2("Do Quang Bach", 18, 1.59);

   no1.display();
   no2.display();
}