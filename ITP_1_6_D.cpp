#include <iostream>
#include <vector>

using namespace std;

//Matrix Vector Multiplication

int main(){
    vector< vector<int> > Amatrix(100, vector<int>(100));
    vector<int> bvector(100);
    vector<int> cvector(100);

    //init      
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
                Amatrix.at(i).at(j) = 0;
        }
        bvector.at(i) = 0;
        cvector.at(i) = 0;
    }

    //input
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> Amatrix.at(i).at(j);
        }
    }
    for (int i=0; i<m; i++){
        cin >> bvector.at(i);
    }

    //multiplication
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cvector.at(i) += Amatrix.at(i).at(j)*bvector.at(j);
        }
    }

    //output
    for (int i=0; i<n; i++){
        cout << cvector.at(i) << endl;
    }

    return 0;
}
