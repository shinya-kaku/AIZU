#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    // 3で割って割り切れる　出力、チェック
    // iをインクリメントしてn以下かチェック
    // 3で割って割り切れない、10で割って3余る　出力、チェック
    // 3で割って割り切れない、10で割って割り切れない、10で割った結果を入れる
    // 結果がゼロ以外ならもっかい10で割るところからチェック

    for (int x = i; i <= n; i++){
        x = i;
        if (x % 3 == 0){
            cout << " " << i;
        } else {
            do {
                if (x % 10 == 3){
                    cout << " " << i;
                    break;
                } else {
                    x /= 10;
                }
            } while (x);
        }
    }

    cout << endl;
    return 0;
}


/*
void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}
*/
