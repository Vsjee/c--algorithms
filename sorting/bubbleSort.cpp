#include <bits/stdc++.h>
using namespace std;

//O(n*n)
vector<int> bubbleSort(vector<int> v) {
  for(int i=0; i<v.size(); i++) {
    for(int j=0; j<v.size(); j++) {
      if(v[i]<v[j]) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
  return v;
}

int main() {
  vector<int> v = {3,1,0,6,23,1,4};

  v = bubbleSort(v);

  for(int i=0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }

  return 0;
}