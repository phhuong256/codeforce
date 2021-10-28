#include "bits/stdc++.h"
using namespace std;

const int MAX = 100;
int n, v, e, d[MAX][MAX];
vector<int> ke[MAX];

int main() {
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		cin >> v >> e;
		ke[i].push_back(v);
		ke[i].push_back(e);
	}
	
	for(int i = 1; i <= n; i++) sort(ke[i].begin(), ke[i].end());
	memset(d, 0, sizeof(d));
	
	for(int i =1; i <= n; i++) {
		for(int j = 0; j < ke[i].size(); j++) {
			d[i][ke[i][j]] = d[ke[i][j]][i] = 1;	
		}
	}
	for(int i = 1; i<=n; i++) {
		for(int j =1; j<= n; j++)
			cout << d[i][j] << " ";
		cout << endl;
	}
}
