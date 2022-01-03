#include <iostream>

using namespace std;

int main(){
    int n;
    int h, m, s;
    h = 0;
    m = 0;
    s = 0;
    cin >> n;
    if (n >= 60*60) {
        h = n / (60*60);
        n = n - (h*60*60);
    }
    if (n >= 60){
        m = n / 60;
        n = n - (m*60);
    }
    s = n;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}