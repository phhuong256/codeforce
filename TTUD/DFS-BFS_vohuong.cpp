#include "bits/stdc++.h"
using namespace std;

const int MAX = 100;
 // e[MAX][MAX]: ma tran ke
 // b[MAX]: danh dau da duyet chua
 // queue: luu lai cac dinh da tham

int n, e[MAX][MAX], b[MAX];

void nhapdothi() {
	int m, u, v;
	cout << "So dinh = "; cin >> n;
	for(int i = 1; i <= n; b[i] = 0, i++)
		for(int j=1;j <= n; j++) e[i][j] = 0;
	cout << "So canh = "; cin >> m;
	for(int i = 1;i<=m;i++){
		cout << "Canh thu " << i << ": "; cin >> u >> v;
		e[u][v] = e[v][u] = 1;
	}
}

void DFS(int k) {
	cout << "DFS tham dinh " << k << endl;
	// danh dau dinh k da duoc xu ly
	// xu ly dinh k
	b[k] = 1;
	// duyet cac dinh con lai
	for(int i =1; i<= n; i++) 
		if(b[i] == 0 && e[k][i]) DFS(i);
}

void BFS(int k) {
	for(int i =1; i <= n; i++) b[i] = 0;
	
	queue<int> q;
	b[k] = 1;
	q.push(k);
	while(!q.empty()) {
		int c = q.front(); q.pop();
		cout << "BFS tham dinh " << c << endl;
		for(int i =1; i<= n; i++)
			if(b[i] == 0 && e[c][i]) {
				b[i] = 1;
				q.push(i);
			}
	}
}
int main() {
	nhapdothi();
	DFS(1);
	BFS(1);
}
