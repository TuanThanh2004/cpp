#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[1001];
bool visited[1001] = {false};



void dfs(int u){
	visited[u] = true;
	cout << u << " ";
	for (int v : adj[u]){
		if (visited[v] == false){
			dfs(v);
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0; i < m; i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	for (int i=1; i <=n; i++){
		if (visited[i] == false )
			dfs(i);
	}
	return 0;
} 
