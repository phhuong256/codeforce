#include "bits/stdc++.h"
using namespace std; 

const int MAX = 100;
int n;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		vector<int> a;
		for(int j=1;j<=n;j++) {
			int x; cin >> x;
			if(x == 1) a.push_back(j);
		}
		for(int j = 0; j < a.size(); j++)
			cout << a[j] << " ";
		cout << endl;
	}
}
