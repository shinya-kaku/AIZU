#include <iostream>
#include <algorithm>

using namespace std;

//Finding a Word


int main(){
    string W;
    string T;
    string word;
    int count = 0;
    //input
    cin >> W;

    while(cin >> word){
        if (word == "END_OF_TEXT"){
            break;
        }
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (W == word) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

