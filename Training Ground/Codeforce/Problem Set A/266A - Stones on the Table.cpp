#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string x;
	cin >> x;
	char last='l';
	int ans = 0;
	for(int i=0;i<x.size();i++){
		if(last==x[i]){
			ans++;
			continue;
		}
		last = x[i];
	}
	cout << ans << endl;
}
