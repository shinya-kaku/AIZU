#include <iostream>
#include <vector>

using namespace std;

int main(){
    std::vector<int> vec(10000);
    int n;
    for (int i = 0; i < n; i++) {
       cin >> vec.at(i);
    }
    int min = vec[0];
    int max = vec[0];
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (vec[i] < min){
            min = vec[i];
        }
        if (max < vec[i]){
            max = vec[i];
        }
        sum = sum + vec[i];
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}
