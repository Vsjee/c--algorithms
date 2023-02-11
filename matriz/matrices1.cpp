#include <bits/stdc++.h>
using namespace std;
/*
	Un programa pida datos al usuario los datos de una matriz de
	2x2 y muestra su traspuesta (el resultado de intercambiar filas por
	columnas).
*/
void printSeparator() {
	for (int i = 0; i<35; i++) {
		cout<<"-";
	}
	cout<<endl;
}

int main() {
	vector<vector<int> > v;
	
	for(int i = 0; i<2; i++) {
		vector<int> v2;
		for(int j = 0; j<2; j++) {
			int value; cin>>value;
			v2.push_back(value);
		}
		v.push_back(v2);
		v2.clear();
	}
	
	//swap vector values
	for(int i = 0; i<v.size(); i++) {
		for(int j = 0; j<v.size(); j++) {
			if(j==1) {
				swap(v[i][j], v[1][0]);
				break;
			} 
		}
		break;
	}
	
	printSeparator();
	
	for(int i = 0; i<v.size(); i++) {
		for(int j = 0; j<2; j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
