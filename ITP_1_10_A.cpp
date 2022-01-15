#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Distance

 //P1(x1, y1), P2(x2, y2)

int main(){
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2; 
    //Pythagorean theorem c^2 = a^2 + b^2
    cout << fixed;
    cout << setprecision(8) << sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))  << endl; 
    return 0;
}
