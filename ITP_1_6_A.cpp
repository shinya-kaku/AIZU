#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    std::vector<int> vec(100);
    cin >> n;
    int size = 0;
    for (int i = 0; i < n; i++) {
       cin >> vec.at(i);
       size = i;
    }
    for (int i=size; i>=0; i--){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
