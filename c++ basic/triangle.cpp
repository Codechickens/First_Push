#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 3;
    double b = 4;
    double step = pow(a,2);
    double step2 = pow(b,2);
    double div = sqrt(step+step2);
    cout << div;
    return 0;
}