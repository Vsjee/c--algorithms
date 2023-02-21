#include <bits/stdc++.h>
#define pb push_back
using namespace std;

//adjList undirected graph

void createEdge(vector<int> adjList[], int u, int v) {
	adjList[u].pb(v);
	adjList[v].pb(u);
}

void printGraph(vector<int> adjList[], int V) {
	for(int v=0; v<V; ++v) {
		cout<<v<<" ";
		for(auto x: adjList[v]) {
			cout<<"->"<<x;
		}
		cout<<endl;
	}
}

int main() {
	int numVertex = 5;
	
	vector<int> adjList[numVertex];
	
	createEdge(adjList, 0,1);
	createEdge(adjList, 0,2);
	createEdge(adjList, 1,3);
	createEdge(adjList, 1,4);
	createEdge(adjList, 2,4);
	createEdge(adjList, 3,4);
	createEdge(adjList, 4,0);
	
	printGraph(adjList, numVertex);
	
	return 0;
}
