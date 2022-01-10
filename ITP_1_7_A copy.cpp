#include <iostream>

using namespace std;

//How many ways?

int main(){

    do{
        int n, x;
        cin >> n >> x;
        if (n == 0 and x == 0){
            break;
        }
        int c = 0;
        for (int i=1; i<n; i++){
            for (int j=i; j<n; j++){
                if (i == j){
                    continue;
                }
                for (int k=j; k<n; k++){
                    if (j == k){
                        continue;
                    }
                    if (i+j+k == x){
                        c += 1;
                        cout << i << j << endl;
                    }
                }
            }
        }
        cout << c << endl;
    }while(1);

    return 0;
}
