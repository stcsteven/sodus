#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,k;
  cin >> x >> k;
  vector<int> arr;
  for(int i=0;i<x;i++){
    int n;
    cin >> n;
    arr.push_back(n);
  }
  sort(arr.begin(), arr.end());
  cout << arr[arr.size()-1] << endl;
  int divider = arr[k-1];
}