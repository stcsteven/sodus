#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  int ans = 0;
  for(int i=0;i<x;i++){
    int ctr = 0;
    for(int j=0;j<3;j++){
      int y;
      cin >> y;
      ctr += y;
    }
    ans += (ctr>=2?1:0);
  }
  cout << ans << endl;
  return 0;
}