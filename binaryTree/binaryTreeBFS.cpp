#include <bits/stdc++.h>
using namespace std;

class Node {
  public: 
    int value;
    Node* left;
    Node* right;

    Node(int val) {
      value = val;
      left = nullptr;
      right = nullptr;
    };
};

void treeBSF(Node* root) {
  queue<Node*> q;
  q.push(root);

  while(!q.empty()) {
    int l = q.size();
    for(int i=0; i<l; i++) {
      Node* n = q.front();
      cout<<n->value<<" ";

      if(n->left != nullptr) q.push(n->left);
      if(n->right != nullptr) q.push(n->right);

      q.pop();
    }
    cout<<endl;
  }
}

int main() {
  Node* root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  treeBSF(root);

  return 0;
}