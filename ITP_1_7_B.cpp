#include <iostream>

using namespace std;

//How many ways?

int main(){

    int answer_count = 0;
    do {
        int n, x;
        cin >> n >> x;
        if (n == 0 and x == 0){
            break;
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i == j){
                    continue;
                }
                for (int k=0; k<n; k++){
                    if (i == k or j == k){
                        continue;
                    }
                    if (x == i + j + k){
                        answer_count += 1;
                    }
                }
            }
        }
    }while(1);

    cout << answer_count << endl;


    return 0;
}
