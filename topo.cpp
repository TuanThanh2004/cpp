#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1001];
bool visited[1001] = {false};

vector <int> topo;

void dfs(int u){
	visited[u] = true;
	for (int v : adj[u]){
		if (!visited[v]){
			dfs(v);
		}
	}
	topo.push_back(u);
}


int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0; i < m; i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		
	}
	for (int i=1; i <= n; i++){
		if (!visited[i]){
			dfs(i);
		}
	}
	for (auto &x : topo){
		cout << x << " ";
	}
	return 0;
}
