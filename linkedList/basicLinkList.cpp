#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int value;
    Node* next;

    Node(int val) {
      value = val;
      next = NULL;
    }
};

void printList(Node* head) {
  if(head==NULL) return;
  queue<Node*> q;
  q.push(head);

  while(!q.empty()) {
    int l = q.size();
    for(int i=0; i<l; i++) {
      Node* n = q.front();
      cout<<n->value;

      if(n->next != nullptr) {
        cout<<"->";
        q.push(n->next);
      }

      q.pop();
    }
  }
}

int main() {
  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  printList(head);

  return 0;
}