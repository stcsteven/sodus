#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll totx=0,toty=0,totz=0,n;
	cin >> n;
	for(ll i=0;i<n;i++){
		ll x,y,z;
		cin >> x >> y >> z;
		if(z!=0) {
			totx += x;
			toty += y;
			totz += z;	
		}
	}
	cout << ((totz==0)?"YES":"NO") << endl;
	return 0;
}
