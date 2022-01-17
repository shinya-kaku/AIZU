#include <iostream>
#include <cmath>

using namespace std;

//Triangle

int main() {
    double a, b, C;
    cin >> a >> b >> C;
    cout << a*b*sin(C) << endl;
    cout << a + b + sqrt((a*a) + (b*b)) << endl;
    cout << b*sin(C) << endl;

    return 0;
}