#include <iostream>

using namespace std;

//Ring


int main(){
    string s;
    string p;
    bool yn = false;
    //input
    cin >> s >> p;
    string check_s = s + s;

    for (int i=0; i<(int)s.length(); i++){
        string tmp = check_s.substr(i, (int)p.length());
        if (tmp == p){
            yn = true;
        }
    }

    if (yn){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

