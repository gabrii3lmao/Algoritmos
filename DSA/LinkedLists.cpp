#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node(int value) : data(value), next(nullptr) {}
};

class Linkedlist {
 private:
  Node* head;

 public:
  Linkedlist() { head = nullptr; }

  void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
      head = newNode;
    } else {
      Node* temp = head;
      while (temp->next != nullptr) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  void deleteByValue(int value) {
    if (head == nullptr) {
      return;
    }

    if (head->data == value) {
      Node* temp = head;
      head = head->next;
      delete temp;
      return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value) {
      temp = temp->next;
    }
    if (temp->next) {
      Node* nodeToDelete = temp->next;
      temp->next = temp->next->next;
      delete nodeToDelete;
    }
  }

  void display() {
    Node* temp = head;
    while (temp != nullptr) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  ~Linkedlist() {
    Node* temp;
    while (head) {
      temp = head;
      head = head->next;
      delete temp;
    }
  }
};

int main() {
  Linkedlist list;

  list.insertAtEnd(10);
  list.insertAtEnd(20);
  list.insertAtEnd(30);

  cout << "Linked List: ";
  list.display();

  list.deleteByValue(20);

  cout << "After Deleting 20: ";
  list.display();

  return 0;
}