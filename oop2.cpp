#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string fullName;

public:
    Person(string fN) {
        fullName = fN;
    };
void sayHello() {
    cout << "Hello! I am "<<fullName<<endl;
}
};

int main() {
    Person n1("BachDo");
    Person n2("Michael");
    n1.sayHello();
    n2.sayHello();
    return 0;

}