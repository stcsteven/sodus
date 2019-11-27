#include <bits/stdc++.h>
using namespace std;

int main(){
  int tcase;
  cin >> tcase;
  while(tcase--){
    int x,y;
    cin >> x >> y;
    bool ans = false;
    if(x>=y) ans = true;
    else if(x==2 && y==3) ans = true;
    else if(x>3 && y>3) ans = true;
    cout << (ans?"YES":"NO") << endl;
  }
}