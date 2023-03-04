#include <bits/stdc++.h>
#define pb push_back
using namespace std;

class Node {
	public:
		int val;
		Node* next;
		Node* prev;
		
		Node(int value) {
			val = value;
			next = NULL;
			prev = NULL;
		}
};

void printFMLnodes(vector<Node*> v, int lastItem) {
	int mid = v.size()/2;
	
	lastItem+=1;
	cout<<"first item: "<<v[0]->val<<endl;
	if(lastItem%2==0) {
		cout<<"middle items: "<<v[mid-1]->val<<" "<<v[mid]->val<<endl;	
	} else {
		cout<<"middle item: "<<v[mid]->val<<endl;
	}
	cout<<"last item: "<<v[lastItem-1]->val<<endl;
	
	cout<<endl;
}

int main() {
	vector<Node*> v;
	
	//get num of nodes
	cout<<"How many nodes do u want?: ";
	int numNodes;cin>>numNodes;
	
	//create and push new nodes to the vector of nodes
	for(int i=0; i<numNodes; i++) {
		cout<<"["<<i<<"]: ";
		int nodeVal;cin>>nodeVal;
		Node* n = new Node(nodeVal);
		v.pb(n);
	}
	
	//assing pointers
	int lastItem = v.size()-1;
	for(int i=0; i<v.size(); i++) {
		if(v[i]!=NULL) {
			if(i=lastItem) {
				v[i]->next = v[0];
				v[0]->prev = v[i];
			} else {
				v[i]->next = v[i+1];
			}
		};
	}
	cout<<endl;
	
	printFMLnodes(v, v.size()-1);
	
	cout<<"Add new node between: "<<v.size()-v.size()<<"-"<<v.size()-1<<" index: ";
	int newIndexNode;cin>>newIndexNode;
	
	cout<<"Now add the value: ";
	int newNodeVal;cin>>newNodeVal;
	Node* n = new Node(newNodeVal); 
	
	if(newIndexNode==0) {
		v.insert(v.begin(), n);
		int lastItem = v.size()-1;
		v[0]->next = v[1];
		v[0]->prev = v[lastItem];
		v[1]->prev = NULL;
		v[lastItem]->next = v[0];
	} else if(newIndexNode==v.size()-1) {
		v.pb(n);
		int lastItem = v.size()-1;
		v[lastItem]->next = v[0];
		v[lastItem-1]->next = v[lastItem];
		v[0]->prev = v[lastItem];
	} else {
		v.insert(v.begin()+newIndexNode, n);
		v[newIndexNode]->next = v[newIndexNode+1];
		v[newIndexNode-1]->next = v[newIndexNode];
	}
	
	printFMLnodes(v, v.size()-1);
	
	for(auto val: v) {
		cout<<val->val<<" "; 
	}
	
	return 0;
} 
