#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> v, int begin, int end) {
  int pivot = v[end];
  int i = (begin - 1);

  for(int j = i; j<end; j++) {
    if(v[j]<=pivot) {
      i++;
      swap(v[i], v[j]);
    }
  }

  swap(v[i + 1], v[end]);
  
  return (i + 1);
}

vector<int> quickSort(vector<int> v, int begin, int end) {
  if (begin<end) {
    int pivot = partition(v, begin, end);
    quickSort(v, begin, pivot - 1); // move to left
    quickSort(v, pivot + 1, end); //move to right
  }
  return v;
}

int main() {
  vector<int> v = {3,1,0,6,23,1,4};

  v = quickSort(v, 0, v.size()-1);

  for(int i = 0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }

  return 0;
}