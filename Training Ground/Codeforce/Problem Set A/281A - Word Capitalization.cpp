#include <bits/stdc++.h>
using namespace std;

int main(){
	string x;
	cin >> x;
	x[0] = (x[0]>='a' && x[0]<='z'?x[0] - 32:x[0]);
	cout << x << endl;
	return 0;
}
