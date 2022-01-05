#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    for (int x = i; i <= n; i++){
        if (x%3 == 0 or x%10 == 0){
            cout << " " << i;
        } else {
            x /= 10;
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
