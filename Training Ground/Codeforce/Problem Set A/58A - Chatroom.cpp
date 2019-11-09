#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  string ans = "hello";
  int ptr = 0;
  cin >> x;
  for(int i=0;i<x.size();i++){
    if(x[i]==ans[ptr])
      ptr++;
  }
  cout << ((ptr==ans.size())?"YES":"NO") << endl;
}