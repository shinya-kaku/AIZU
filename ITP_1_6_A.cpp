#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    std::vector<int> vec(100);
    cin >> n;
    for (int i = 0; i < n; i++) {
       cin >> vec.at(i);
    }
    int tmp;
    for (int i=vec.size(); i>0; i--){
        cout << vec[i];
    }
    cout << endl;

    return 0;
}
