#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, n, w;
  cin >> k >> n >> w;
  int total_price = ((w*(w+1))/2)*k;
  int ans = total_price - n;
  cout << (ans < 0 ? 0 : ans) << endl;
}