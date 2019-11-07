#include <bits/stdc++.h>
using namespace std;

set<string> positive={"++X","X++"};

int main(){
  int n,ans=0;
  cin >> n;
  while(n--){
    string in;
    cin >> in;
    auto found = positive.find(in);
    if(found != positive.end())
      ans++;
    else
      ans--;
  }
  cout << ans << endl;
}