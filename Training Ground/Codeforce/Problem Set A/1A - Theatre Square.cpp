#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,a;
  cin >> n >> m >> a;
  double row = ceil((double)n/a);
  double col = ceil((double)m/a);
  cout << (unsigned long long)ceil(row*col) << endl;
  return 0;
}