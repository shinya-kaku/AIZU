#include <iostream>
#include <vector>

using namespace std;

//Counting Characters


int main(){
    vector<int> alphavet(26);
    string base = "abcdefghijklmnopqrstuvwxyz";

    //init
    for (int i=0; i<26; i++){
        alphavet.at(i) = 0;
    }

    do {
        string in;
        getline(cin, in);
        if (in == ""){
            break;
        }

        for (int i=0; i<in.length(); i++){
            char& c = in.at(i);
            for (int j=0; j<26; j++){
                char& b = base.at(j);
                if (tolower(c) == b){
                    alphavet.at(j) += 1;
                }
            }
        }
    } while (1);

    for (int i=0; i<26; i++){
        cout << base.at(i) << " : " << alphavet.at(i) <<endl;
    }

    return 0;
}

