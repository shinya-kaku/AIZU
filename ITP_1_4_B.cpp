#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r, m, l;
    cin >> r;
    m = r*r*3.14159265;
    l = 2.0*r*3.14159265;
    cout << fixed << setprecision(6) << m << " ";
    cout << fixed << setprecision(6) << l << endl;
    return 0;
}