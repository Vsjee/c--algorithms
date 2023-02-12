#include <bits/stdc++.h>
using namespace std;

//recursive way
int binSearch(vector<int> v, int l, int s, int search) {
  if(s>=l) {
    int mid = l + (s - l) / 2;

    if(v[mid] == search) return mid;

    if(v[mid] > search) {
      return binSearch(v, l, mid-1, search);
    }

    return binSearch(v, l, mid+1, search);
  }

  return -1;
}

int main() {
  vector<int> v = {1,3,5,6,8,12,13};
  int search = 3;

  int res = binSearch(v, 0, v.size()-1, search);
  (res == -1)
    ? cout<<"Element is not in array"
    : cout<<"Element is at index: ["<<res<<"]";

  return 0;
}