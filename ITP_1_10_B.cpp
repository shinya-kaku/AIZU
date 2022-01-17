#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Triangle

int main() {
    double a, b, C;
    double rad;
    cin >> a >> b >> C;
    //cout << a << b << C << endl;
    rad = C * (M_PI/180);
    //cout << sin(rad) << endl;
    cout << std::fixed;
    cout << std::setprecision(11) << 0.5*a*b*sin(rad) << endl;
    cout << std::setprecision(11)  << a + b + sqrt((a*a) + (b*b) - (2.0*a*b*cos(rad))) << endl;
    cout << std::setprecision(11)  << b*sin(rad) << endl;

    return 0;
}