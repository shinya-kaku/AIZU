#include <iostream>

using namespace std;

int main(){
    int H, W;
    do {
        cin >> H >> W;
        if (H == 0 and W == 0){
            break;
        }
        for (int i=0; i<H; i++){
            for (int j=0; j<W; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    } while (H != 0);

    return 0;
}