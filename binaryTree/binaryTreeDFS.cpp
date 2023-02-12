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

//preorder
void preorderTreeDFS(Node* root) {
	if(root == nullptr) return;
	
	cout<<root->value<<" ";
	preorderTreeDFS(root->left);
	preorderTreeDFS(root->right);
}

//inorder
void inorderTreeDFS(Node* root) {
	if(root == nullptr) return;
	
	preorderTreeDFS(root->left);
	cout<<root->value<<" ";
	preorderTreeDFS(root->right);
}

//postorder
void postorderTreeDFS(Node* root){
	if(root == nullptr) return;
	
	preorderTreeDFS(root->left);
	preorderTreeDFS(root->right);
	cout<<root->value<<" ";
}

int main() {
  Node* root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  preorderTreeDFS(root); cout<<"preorder"<<endl;
  inorderTreeDFS(root);	cout<<"inorder"<<endl;
  postorderTreeDFS(root); cout<<"postorder"<<endl;

  return 0;
}
