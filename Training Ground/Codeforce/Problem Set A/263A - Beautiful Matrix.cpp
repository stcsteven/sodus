#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int n;
			cin >> n;
			if(n==1) x=i,y=j;
		}
	}
	int eux = abs(x-2);
	int euy = abs(y-2);
	cout << eux + euy << endl;
}
