#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;
  int arr[4],mx=0;
  memset(arr,0,sizeof(arr));
  for(int i=0;i<x.size();i+=2){
    arr[x[i]-'0']++;
    mx = max(mx,x[i]-'0');
  }
  for(int i=1;i<=mx;i++){
    for(int j=0;j<arr[i];j++)
      cout << i << ((i==mx && j==arr[i]-1)? "\n": "+" );
  }
  return 0;
}