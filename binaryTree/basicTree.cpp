#include <bits/stdc++.h>
using namespace std;

class Node {
  public: 
    int value;
    Node* left;
    Node* right;

    Node(int val) {
      value = val;
      left = NULL;
      right = NULL;
    };
};

void printBasicTree(Node* root) {
  queue<Node*> q;
  q.push(root);

  while(true) {
    int l = q.size();

    if(l == 0) {
      break;
    }

    int i = 0;

    while(i<l) {
      Node* n = q.front();
      cout<<n->value<<" ";

      if(n->left != NULL) {
        q.push(n->left);
      }

      if(n->right != NULL) {
        q.push(n->right);
      }

      q.pop();
      i++;
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

  printBasicTree(root);

  return 0;
}
