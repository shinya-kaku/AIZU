/*
公舎の入居者数

Ａ大学は１フロア１０部屋、３階建ての公舎４棟を管理しています。公舎の入居・退去の情報を読み込み、各部屋の入居者数を出力するプログラムを作成して下さい。

n件の情報が与えられます。各情報では、４つの整数b, f, r, vが与えられます。これは、b棟f階のr番目の部屋にv人が追加で入居したことを示します。vが負の値の場合、-v人退去したことを示します。

最初、全ての部屋には誰も入居していないものとします。

Input
最初の行に情報の数 n が与えられます。

続いて n 件の情報が与えられます。各情報には４つの整数 b, f, r, v が空白区切りで１行に与えられます。

Output
４棟について入居者数を出力して下さい。各棟について、１階、２階、３階の順に入居者数を出力します。各階については、１番目、２番目、・・・、１０番目の部屋の入居者数を順番に出力します。入居者数の前には１つの空白を出力して下さい。また、各棟の間には####################(20個の#)で区切って下さい。

Constraints
間違った棟番号・階・部屋番号は与えられない。
管理の過程で１部屋の入居者数が０より少なくなることはない。
管理の過程で１部屋の入居者数が9より多くなることはない。
*/

#include <iostream>
#include <vector>

using namespace std;

//Official House

int main(){
    vector< vector< vector<int> > > data(4, vector<vector<int>>(3, vector<int>(10)));

    //init      
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++){
                data.at(i).at(j).at(k) = 0;
            }
        }
    }

    //input
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        data.at(b-1).at(f-1).at(r-1) += v;
    }

    //output
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++){
                cout << data.at(i).at(j).at(k);
                if (k!=9){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << "####################" << endl;
    }

    return 0;
}