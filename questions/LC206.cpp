#include <bits/stdc++.h>

using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
  ListNode* prevptr = nullptr;
  ListNode* currptr = head;
  ListNode* nextptr;

  while (currptr != nullptr) {
    nextptr = currptr->next;
    currptr->next = prevptr;
    prevptr = currptr;
    currptr = nextptr;
  }
  return prevptr;
}

void printList(ListNode* head) {
  while (head != nullptr) {
    cout << head->val << "-> ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

int main() {
  ListNode* node3 = new ListNode(3, nullptr);
  ListNode* node2 = new ListNode(2, node3);
  ListNode* node1 = new ListNode(1, node2);

  cout << "Lista original:\n";
  printList(node1);

  cout << "Lista invertida:\n";
  ListNode* reversed = reverseList(node1);
  printList(reversed);

  return 0;
}