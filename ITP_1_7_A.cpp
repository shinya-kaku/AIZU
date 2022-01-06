#include <iostream>
#include <vector>

using namespace std;

//Matrix Vector Multiplication

int main(){

    for(i=0; i<50; i++){
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 and f == -1 and r == -1){
            break;
        }
        if (m == -1 or f == -1){
            cout << "F" << endl;
            continue;
        }
        if (m+f >= 80){
            cout << "A" << endl;
            continue;
        }
        if (m+f >= 65){
            cout << "B" << endl;
            continue;
        }
        if (m+f >= 50 or (m+f>=30 and r >= 50)){
            cout << "C" << endl;
            continue;
        }
        if (m+f >= 30){
            cout << "D" << endl;
            continue;
        }
        cout << "F" << endl;
    }

    return 0;
}
