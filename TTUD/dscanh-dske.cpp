#include "bits/stdc++.h"
using namespace std;

const int MAX = 100;
int v, e;
vector<int> ke[MAX];

int main() {
	cin >> v >> e;
	
	for(int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	
	for(int i = 1; i <=v; i++) sort(ke[i].begin(), ke[i].end());
	
	for(int i =1; i <= v; i++) {
		cout << i << ": ";
		for(int j = 0; j < ke[i].size(); j++) cout << " " << ke[i][j];
		cout<< endl;
	}
}
