#include <iostream>
using namespace std;

int main(){
    int x, y;
    for (int i=1; i<=3000; i++){
        cin >> x >> y;
        if (x == 0 and y == 0){
            break;
        }
        if (x > y){
            cout << y << " " << x << endl;
        } else {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}