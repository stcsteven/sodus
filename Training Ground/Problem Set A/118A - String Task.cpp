#include <bits/stdc++.h>
using namespace std;

set<char>vowel = {'a', 'i', 'u', 'e', 'o', 'y'};

string convert_lowercase(string in){
  for(int i=0;i<in.size();i++){
    if (in[i]>='A' && in[i]<='Z')
      in[i]+=32;
  }
  return in;
}

string delete_consonant(string in){
  string ans;
  for(int i=0;i<in.size();i++){
    auto found = vowel.find((char)in[i]);
    if (found==vowel.end()){
      ans+= '.';
      ans+= in[i];
    }
  }
  return ans;
}

int main(){
  string in;
  cin >> in;
  in = convert_lowercase(in);
  in = delete_consonant(in);
  cout << in << endl;
  return 0;
}