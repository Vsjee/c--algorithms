#include <bits/stdc++.h>
using namespace std;

class Graph {
	public:
		vector<int> v_;
		vector<pair<int, int> > e_;
		
		Graph(vector<int> &v, vector<pair<int, int> > &e)
			: v_(v), e_(e) {}
		
		bool isEw();
};

bool Graph::isEw() {
	vector<int> degrees(e_.size());
	
	for(auto e: e_) {
		degrees[e.first++];
		degrees[e.second++];
	}
	
	int cOdd = 0;
	for(auto d: degrees) {
		if(d%2==1) {
			cOdd++;
		}
	}
	
	return (cOdd==0 || cOdd==2);
}

int main() {
	vector<int> v = {0,1,2,3};
	vector<pair<int, int> > e = {{0,1}, {1,2}, {2,3}, {3,0}};
		
	Graph g(v, e);
	
	cout<<g.isEw()<<endl;
	
	return 0;
}
