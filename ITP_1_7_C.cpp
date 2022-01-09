#include <iostream>
#include <vector>

using namespace std;

//Spreadsheet

int main(){
    int r, c;
    vector< vector<int> > Amatrix(101, vector<int>(101));
    vector<int> rvector(101);

    //init
    for (int i=0; i<101; i++){
        for (int j=0; j<101; j++){
            Amatrix.at(i).at(j) = 0;
            rvector.at(j) = 0;
        }
    }

    //input
    cin >> r >> c;
    for (int i=0; i<r; i++){ //行 
        for (int j=0; j<c; j++){ //列
            cin >> Amatrix.at(i).at(j);
        }
    }

    //calc
    for (int i=0; i<r; i++){ //行
        int r_sum = 0;
        for (int j=0; j<c; j++){ //列
            r_sum += Amatrix.at(i).at(j);
            cout << Amatrix.at(i).at(j) << " ";
            rvector.at(j) += Amatrix.at(i).at(j);
        }
        cout << r_sum << endl;
        rvector.at(c) += r_sum;
    }
    for (int j=0; j<c; j++){
        cout << rvector.at(j) << " ";
    }
    cout << rvector.at(c) << endl;

    return 0;
}
