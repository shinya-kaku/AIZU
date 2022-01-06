#include <iostream>

using namespace std;

//How many ways?

int main(){

    for(int i=0; i; i++){
        int n, x;
        cin >> n >> x;
        if (n == 0 and x == 0){
            break;
        }
        int c = 0;
        for (int i=1; i<n; i++){
            for (int j=i; j<n; j++){
                for (int k=j; k<n; k++){
                    if (i+j+k == x){
                        c += 1;
                    }
                }
            }
        }
        cout << c << endl;

    return 0;
}
