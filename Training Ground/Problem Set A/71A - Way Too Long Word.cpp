#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;
  string mid = to_string(x.size()-2);
  cout << (x.size()<=10?x:(x[0]+mid+x[x.size()-1])) << endl;
}