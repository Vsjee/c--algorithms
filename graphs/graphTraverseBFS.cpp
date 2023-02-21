#include <bits/stdc++.h>
#define pb push_back
using namespace std;

//impl of an adjList BFS, queue

void createEdge(vector<int> adjList[], int u, int v) {
	adjList[u].pb(v);
	adjList[v].pb(u);
}

void funDFS(vector<int> adjList[], vector<bool> isVisited, int source) {
	queue<int> q;
	q.push(source);
	
	while(!q.empty()) {
		int v=q.front();
		isVisited.at(v) = true;
		cout<<v<<" ";
		
		for(vector<int>::iterator it=adjList[v].begin(); it!=adjList[v].end(); it++) {
			if(!isVisited.at(*it)) {
				q.push(*it);
				isVisited.at(*it) = true;
			}
		}
		q.pop();
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
	
	funDFS(adjList, isVisited, source);
	
	return 0;
}
