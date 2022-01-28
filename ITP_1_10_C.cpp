#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//Standard Deviation
int main (){
    do {
        //α2 = (∑ni=1(si - m)2)/n
        int n;
        std::vector<int> vec(10000);
        double all, m, a;
        cin >> n;
        if (n == 0){
            break;
        }
        all = 0;
        for (int i=0; i<n; i++) {
            cin >> vec[i];
            all += vec[i];
        }
        m = all/n;
        all = 0;
        for (int i=0; i<n; i++){
            all += (vec[i] - m)*(vec[i] - m);
        }
        a = all/n;
        a = sqrt(a);
        cout << a << endl;
    } while (1);
    return 0;
}