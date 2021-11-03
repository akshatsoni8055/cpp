#include <bits/stdc++.h>
using namespace std;

template <class X> class Node {
public:
  X data;
  Node* next = NULL;

  Node(X el) {
    this->data = el;
  }
};

template <class X> class List {

public:
  Node<X>* head = NULL;
  int length = 0;

  bool add(X el) {
    Node<X>* node = new Node<X>(el);

    if (this->head == NULL) {
      this->head = node;
    }
    else {
      Node<X>* curr = this->head;
      while (curr->next != NULL) {
        curr = curr->next;
      }
      curr->next = node;
    }
    this->length++;
    return true;
  }
  void print() {
    Node<X>* curr = this->head;
    while (curr->next != NULL) {
      cout << curr->data << " ";
      curr = curr->next;
    }
    cout << curr->data << endl;
  }
  X remove(int idx) {
    Node<X>* prev = NULL;
    Node<X>* curr = this->head;

    for (int i = 1; i < idx; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    X el = curr->data;
    delete curr;
    this->length--;
    return el;
  }
  void reverse() {
    if (this->length == 0) return;

    Node<X>* curr = this->head;
    Node<X>* prev = NULL;
    Node<X>* next = NULL;

    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;

      prev = curr;
      curr = next;
    }
    this->head = prev;

  }
  void destroy() {
    Node<X>* next;
    Node<X>* curr = this->head;

    while (curr != NULL) {
      next = curr->next;
      delete curr;
      curr = next;
    }

    this->length = 0;
  }
  bool isLoop() {
    unordered_set<Node<X>*> s;
    Node<X>* curr = this->head;

    while (curr->next != NULL) {
      if (s.find(curr) != s.end()) return true;
      s.insert(curr);
      curr = curr->next;
    }

    return false;
  }

  int loopSize() {
    unordered_map<Node <X>*, int> m;
    Node <X>* curr = this->head;

    for (int i = 1; curr->next != NULL; i++) {

      if (m.find(curr) == m.end()) {
        m[curr] = i;
      }
      else {
        return i - m[curr] + 1;
      }

      curr = curr->next;
    }

    return 0;
  }
};

int main() {
  List<string> list;
  list.add("akshat");
  list.add("soni");
  list.add("qwerty");
  list.add("uiop");

  list.print();
  list.remove(2);
  list.reverse();
  list.print();


  cout << list.length << endl;
  cout << list.isLoop() << endl;
  cout << list.loopSize() << endl;
  return 0;
}
