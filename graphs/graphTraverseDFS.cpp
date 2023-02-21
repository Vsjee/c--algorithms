#include <bits/stdc++.h>
#define pb push_back
using namespace std;

//impl of an adjList DFS

void createEdge(vector<int> adjList[], int u, int v) {
	adjList[u].pb(v);
	adjList[v].pb(u);
}

void recursionDFS(vector<int> adjList[], vector<bool> isVisited, int source) {
	isVisited.at(source) = true;
	cout<<source<<" ";
	
	for(vector<int>::iterator it=adjList[source].begin(); it!=adjList[source].end(); it++) {
		if(!isVisited[*it]) {
			recursionDFS(adjList, isVisited, *it);
		}
	}
}

int main() {
	int numVertex = 5;
	int source = 0;
	
	vector<int> adjList[numVertex];
	vector<bool> isVisited(numVertex, false);
	
	createEdge(adjList, 0, 1);
	createEdge(adjList, 0, 2);
	createEdge(adjList, 1, 3);
	createEdge(adjList, 1, 4);
	createEdge(adjList, 3, 3);
	createEdge(adjList, 4, 4);
	createEdge(adjList, 2, 2);
	
	recursionDFS(adjList, isVisited, source);
	
	return 0;
}
