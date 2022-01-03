#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    std::vector<int> vec(3);
    for (int i = 0; i < 3; i++) {
       cin >> vec.at(i);
    }
    int tmp;
    for (int j=0; j < 3-1; j++){
        for (int i=0; i < 3-j-1; i++){
            if (vec[i] > vec[i+1]) {
                tmp = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = tmp; 
            }
        }
    }

    cout << vec[0] << " " << vec[1] << " " << vec[2] << endl;

    return 0;
}
