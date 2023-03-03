#include <bits/stdc++.h>
#define pb push_back
using namespace std;

class Node {
	public:
		int val;
		Node* next;
		
		Node(int value) {
			val = value;
			next = nullptr;
		}
};

int main() {
	vector<Node*> v;
	
	//get data from the user
	for(int i=0; i<10; i++) {
		cout<<"["<<i<<"]: ";
		int val;cin>>val;
		Node* n = new Node(val);
		v.pb(n);
	}
	
	//assing pointers
	for(int i=0; i<10; i++) {
		if(v[i] != nullptr) {
			v[i]->next = v[i+1];
		}
	}
	
	//print first, middle, last
	int mid = v.size()/2;
	
	cout<<"Firts: "<<v[0]->val<<endl;
	cout<<"Middle: "<<v[mid]->val<<endl;
	cout<<"Last: "<<v[v.size()-1]->val<<endl;
	
	return 0;
}
