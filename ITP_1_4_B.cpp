#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double r, m, l;
    cin >> r;
    m = r*r*M_PI;
    l = 2.0*r*M_PI;
    cout << fixed << setprecision(6) << m << " ";
    cout << fixed << setprecision(6) << l << endl;
    return 0;
}