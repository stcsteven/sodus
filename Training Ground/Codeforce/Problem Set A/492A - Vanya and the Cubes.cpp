#include <bits/stdc++.h>
using namespace std;

int main(){
  int counter = 1, next_level = 1;
  int height = 1;
  int x,t=3;
  cin >> x;
  while(x>0){
    // x-=next_level;
    height+=1;
    counter+=height;
    x-=counter;
  }
  cout << height-1 << endl;
}