#include <iostream>
using namespace std;

int main(){
    int a, b;
    int r, d;
    double f;
    cin >> a >> b;
    r = a/b;
    d = a%b;
    f = (double)a/(double)b;
    cout << r << " " << d << " " << f << endl;
    return 0;
}