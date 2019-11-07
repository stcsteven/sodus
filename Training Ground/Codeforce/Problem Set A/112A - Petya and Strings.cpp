#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;
  int ans = 0;
  for(int i=0;i<a.size();i++){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
    if(a[i]!=b[i]){
      ans = (a[i]<b[i]?(-1):(1));
      break;
    }
  }
  cout << ans << endl;
}