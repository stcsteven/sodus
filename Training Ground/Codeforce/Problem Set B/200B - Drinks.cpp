#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double total=0;
	for(int i=0;i<n;i++){
		double p;
		cin >> p;
		total += (p/100);
	}
	cout << fixed;
	cout << setprecision(12);
	cout << ((total*100)/n) << endl;
	return 0;
}
