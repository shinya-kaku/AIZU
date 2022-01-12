#include <iostream>

using namespace std;

//Card Game

int main(){
    int n;
    string taro, hanako;
    int taro_c = 0;
    int hanako_c = 0;
    cin >> n;
    for (int i=0; i<n; i++){
            cin >> taro >> hanako;
            if (taro == hanako){
                taro_c += 1;
                hanako_c += 1;
            } else if (taro > hanako){
                taro_c += 3;
            } else {
                hanako_c += 3;
            }
    }
    cout << taro_c << " " << hanako_c << endl;

    return 0;
}

