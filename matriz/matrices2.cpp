#include <bits/stdc++.h>
using namespace std;
/*
	? Un programa que pida al usuario los datos de dos matrices de
	2x2, y calcule y muestre su producto.
*/
void printSeparator() {
	for (int i = 0; i<35; i++) {
		cout<<"-";
	}
	cout<<endl;
}

int main() {
	vector<vector<int> > v;
	int res;
	
	for(int i = 0; i<2; i++) {
		vector<int> v2;
		for(int j = 0; j<2; j++) {
			int value; cin>>value;
			v2.push_back(value);
			/*	
			res+=v2[j];
				si no se quiere iterar luego en el vector v, 
				aqui mismo hacer el calculo del producto
				al mismo tiempo que pedimos los datos al usuario.
			*/
		}
		v.push_back(v2);
		v2.clear();
	}
	
	printSeparator();
	
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<2; j++) {
			res+=v[i][j];
		}
	}
	
	cout<<"Calculo del producto es: "<<res;
	
	return 0;
}
