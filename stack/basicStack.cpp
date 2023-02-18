#include <bits/stdc++.h>
#define p push
using namespace std;

int main() {
	stack<int> s;
	cout<<"how may stack numbers u want? ";
	int n;cin>>n;
	
	for(int i=0; i<n; i++) {
		s.p(i+1);
	}
	
	for(int i=0; i<s.size(); i++) {
		cout<<s.top()-i<<endl;
	}
	
	cout<<endl;
	
	int mid = s.top()-(s.size()/2);
	if(mid%2==0) {
		cout<<"mid values: "<<mid<<" "<<mid+1;
	} else {
		cout<<"mid value: "<<mid;	
	}
	 
	return 0;
}
