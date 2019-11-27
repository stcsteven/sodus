#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  int bus[5];
  memset(bus,0,sizeof(bus));
  while(n--){
    int x;
    cin >> x;
    bus[x]+=1;
  }
  ans += bus[1]/4;
  bus[1] -= (bus[1]/4)*4;
  ans += bus[4];
  ans += bus[2]/2;
  bus[2] -= (bus[2]/2)*2;
  cout << ans + (max(bus[1],bus[2]+bus[3])) << endl;
}