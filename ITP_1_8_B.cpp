#include <iostream>

using namespace std;

//Sum of Numbers

int main(){

    do {
        string x;
        int ans = 0;
        cin >> x;
        if (x == "0"){
            break;
        }
        for (int i=0; i<x.length(); i++){
            char c = x.at(i);
            int tmp = c - '0';
            ans += tmp;
            //cout << "tmp " << tmp << "c " << c << "ans " << ans << endl;
        }
        cout << ans << endl;
    }while(1);

    return 0;
}

