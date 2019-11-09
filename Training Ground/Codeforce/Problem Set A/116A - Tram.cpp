#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cap=0;
  int now = 0;
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    now = now - a + b;
    cap = max(cap, now);
  }
  cout << cap << endl;
}
