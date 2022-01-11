#include <iostream>

using namespace std;

//Toggling Cases

int main(){

    string in;
    getline(cin, in);

    for (int i=0; i<in.length(); i++){
        char& c = in.at(i);
        if (isupper(c)){
            c = tolower(c);
        } else {
            c = toupper(c);
        }
    }

    cout << in << endl;

    return 0;
}

