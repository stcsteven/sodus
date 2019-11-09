#include <bits/stdc++.h>
using namespace std;

int main(){
	int totx=0,toty=0,totz=0,n;
	cin >> n;
	for(int i=0;i<n;i++){
		int x,y,z;
		cin >> x >> y >> z;
		totx += x;
		toty += y;
		totz += z;
	}
	cout << ((totz==0 && totx==0 && toty==0)?"YES":"NO") << endl;
	return 0;
}
