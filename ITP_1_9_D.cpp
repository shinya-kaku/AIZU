#include <iostream>
#include <algorithm>

using namespace std;

//Transformation

int main(){
    int q;
    string str;

    cin >> str >> q;

    for (int i=0; i<q; i++){
        string tmp;
        //getline(cin, tmp);
        string command;
        string p;
        int a, b;
        cin >> command >> a >> b;
        //b = b - a + 1;
        if (command == "print"){
            //cout << a << b << endl;
            cout << str.substr(a, b - a + 1) << endl;
        } else if (command == "reverse"){
            reverse(&str[a], &str[b+1]);
        } else if (command == "replace"){
            cin >> p;
            str.replace(a, b-a+1, p);
        }
        //cout << str << endl;
    }

    return 0;
}

