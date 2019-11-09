#include <bits/stdc++.h>
using namespace std;

int main(){
	string x;
	cin >> x;
	set<char> sit;
	for(int i=0;i<x.size();i++) 
		sit.insert(x[i]);
	cout << ((sit.size()&1)? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}
