#include <bits/stdc++.h>
using namespace std;

int main(){
  map<string,int> mep;
  int x;
  cin >> x;
  while(x--){
    string n;
    cin >> n;
    if(mep[n]==0)
      cout << "OK" << endl;
    else
      cout << n + to_string(mep[n]) << endl;
    mep[n]++;
  }
}