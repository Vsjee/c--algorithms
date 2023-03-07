#include <bits/stdc++.h>
using namespace std;

int powerOf(int num, int exp, int n){
	if(n<exp) {
		return num+powerOf(num,exp,n+1);
	} 
}

int finalPower(int num, int exp) {
	if(exp>0) {
		return num+finalPower(num,exp-1);
	}
}

int main(){
	int base = 5;
	int exp = 5;
	int res1 = powerOf(base,exp,1);
	int res2 = finalPower(res1, exp);
	cout<<res2;
	
	return 0;
}
