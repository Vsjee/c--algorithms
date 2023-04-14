#include <bits/stdc++.h>
#define pb push_back
#define INF 0x3f3f3f3f
using namespace std;

void addEdge(vector<pair<int, int> > adj[], int u, int v, int weight) {
	adj[u].pb(make_pair(v, weight));
	adj[v].pb(make_pair(u, weight));
}

// dikjstra easy impl
void shortestPath(vector<pair<int, int> > adj[], int V, int src) {
	priority_queue<pair<int, int> > pq;

	vector<int> dist(V, INF);

	pq.push(make_pair(0, src));
	dist[src] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		
		for (auto x : adj[u]) {
			int v = x.first;
			int weight = x.second;

			if (dist[v] > dist[u] + weight) {
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	
	cout<<"Vertex distance from source"<<endl;
	for (int i = 0; i < V; ++i) {
		cout<<dist[src]<<" to "<<i<<" = "<<dist[i]<<endl;
	}
}

int main() {
	int V = 7;
	vector<pair<int, int> > adj[V];

	addEdge(adj, 0, 1, 3);
	addEdge(adj, 0, 2, 2);
	addEdge(adj, 1, 2, 2);
	addEdge(adj, 1, 3, 1);
	addEdge(adj, 1, 4, 4);
	addEdge(adj, 2, 3, 3);
	addEdge(adj, 2, 5, 5);
	addEdge(adj, 2, 6, 6);
	addEdge(adj, 3, 6, 2);
	addEdge(adj, 4, 6, 1);
	addEdge(adj, 5, 6, 2);
	
	shortestPath(adj, V, 0);

	return 0;
}

