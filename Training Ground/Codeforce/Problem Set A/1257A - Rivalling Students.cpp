#include <bits/stdc++.h>
using namespace std;

int main(){
  int tcase;
  cin >> tcase;
  while(tcase--){
    int n,x,a,b;
    cin >> n >> x >> a >> b;
    int dist = abs(a-b);
    if(dist==(n-1)) cout << n-1 << endl;
    else cout << dist+x << endl;
  }
  return 0;
}