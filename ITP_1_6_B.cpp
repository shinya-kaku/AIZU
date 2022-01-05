#include <iostream>
#include <vector>

using namespace std;

//Finding Missing Cards

int main(){
    vector< vector<int> > data(4, vector<int>(13));
    
    // 入力 (2重ループを用いる)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
        data.at(i).at(j) = 0;
        }
    }
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string S;
        int L;
        cin >> S >> L;
        if (S == "S"){
            data.at(0).at(L-1) = 1;
        }
        if (S == "H"){
            data.at(1).at(L-1) = 1;
        }
        if (S == "C"){
            data.at(2).at(L-1) = 1;
        }
        if (S == "D"){
            data.at(3).at(L-1) = 1;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (data.at(i).at(j) == 0){
                switch (i) {
                case 0:
                    cout << "S " << j+1 << endl;
                    break;
                case 1:
                    cout << "H " << j+1 << endl;
                    break;
                case 2:
                    cout << "C " << j+1 << endl;
                    break;
                case 3:
                    cout << "D " << j+1 << endl;
                    break;
                default:
                    cout << "? " << j+1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
