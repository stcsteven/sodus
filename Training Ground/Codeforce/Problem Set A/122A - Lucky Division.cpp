#include <bits/stdc++.h>
using namespace std;

int luckies[12]={4,7,47,74,444,447,474,477,744,747,774,777};

int main(){
  int x;
  cin >> x;
  bool ans = 0;
  for(int i=0;i<12;i++){
    ans |= ((x%luckies[i])==0 || x==luckies[i]);
  }
  cout << (ans?"YES":"NO") << endl;
}