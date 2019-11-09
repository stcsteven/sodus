#include <bits/stdc++.h>
using namespace std;

int main(){
	string x;
	cin >> x;
	bool d = false;
	int zero=0,one=0;
	for(int i=0;i<x.size();i++){
		if((zero>0 && x[i]=='1') || (one>0 && x[i]=='0')) {
			zero=0;
			one=0;
		}
		zero += (x[i]=='0'?1:0);
		one += (x[i]=='1'?1:0);
		d |= (zero>=7 || one >=7 ?true: false);
	}
	cout << (d?"YES":"NO") << endl;
	return 0;
}
