#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  cout << ((!(x&1) && x>2) ? "YES" : "NO") << endl;
}