#include <iostream>
#include <vector>

using namespace std;

//Matrix Multiplication

int main(){
    int n, m, l;
    vector< vector<int> > Amatrix(101, vector<int>(101));
    vector< vector<int> > Bmatrix(101, vector<int>(101));
    vector< vector<long long int> > Cmatrix(101, vector<long long int>(101));

    //init
    for (int i=0; i<101; i++){
        for (int j=0; j<101; j++){
            Amatrix.at(i).at(j) = 0;
            Bmatrix.at(i).at(j) = 0;
            Cmatrix.at(i).at(j) = 0;            
        }
    }

    //input
    cin >> n >> m >> l;
    for (int i=0; i<n; i++){ //行 
        for (int j=0; j<m; j++){ //列
            cin >> Amatrix.at(i).at(j);
        }
    }
    for (int i=0; i<m; i++){ //行 
        for (int j=0; j<l; j++){ //列
            cin >> Bmatrix.at(i).at(j);
        }
    }

    //calc
    for (int i=0; i<n; i++){
        for (int j=0; j<l; j++){
            for (int k=0; k<m; k++){
                Cmatrix.at(i).at(j) += Amatrix.at(i).at(k) * Bmatrix.at(k).at(j);
            }
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<l; j++){
            cout << Cmatrix.at(i).at(j);
            if (j<l-1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
