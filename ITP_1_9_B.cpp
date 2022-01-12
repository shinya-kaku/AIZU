#include <iostream>

using namespace std;

//Shuffle


int main(){
    string cards;
    while (cin >> cards){
        if (cards == "-"){
            break;
        }
        int m;
        //input
        cin >> m;
        int h = 0;
        for (int i=0; i<m; i++){
            cin >> h;
            string tmp = cards.substr(0, h);
            cards = cards.substr(h, (int)cards.length()) + tmp;
        }
        cout << cards << endl;
    }

    return 0;
}

