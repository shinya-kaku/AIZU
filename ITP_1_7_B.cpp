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
        for (int i=1; i<=n; i++){
            for (int j=i+1; j<=n; j++){
                for (int k=j+1; k<=n; k++){
                    if (x == i + j + k){
                        /*cout << i << " " <<  j << " " << k << endl;*/
                        answer_count += 1;
                    }
                }
            }
        }
    }while(1);

    cout << answer_count << endl;


    return 0;
}
