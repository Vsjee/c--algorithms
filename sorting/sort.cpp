#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {3,1,0,6,23,1,4};
  sort(v.begin(), v.end());
  
  for(int i=0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }

  return 0;
}