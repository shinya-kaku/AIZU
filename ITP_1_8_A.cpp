#include <iostream>

using namespace std;

//Toggling Cases

int main(){

    string in;
    cin >> in;

    for (int i=0; i<in.length(); i++){
        if (in.at(i).isupper){
            in.at(i) = tolower(in.at(i));
        } else {
            in.at(i) = toupper(in.at(i));
        }
    }

    cout << in;

    return 0;
}

