#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    string op;
    do {
        int i;
        cin >> a >> op >> b;
        if (op == "?"){
            break;
        }
        if (op == "+"){
            i = a + b;
        }
        if (op == "-"){
            i = a - b;
        }
        if (op == "/"){
            i = a / b;
        }
        if (op == "*"){
            i = a * b;
        }
        cout << i << endl;
    } while (op != "?");
    return 0;
}
