//COMSC-210 | Lab 17 | Ahmad Dharhan

#include <iostream>
using namespace std;

const int SIZE = 7;

struct Node {
  float value;
  Node * next;
};

void output(Node * );
void addNodeHead(Node *&);
void addNodeTail(Node *&);
void deleteNode(Node *&);
void insertNode(Node *&);
void deleteList(Node *&);

int main() {

  int input = 0;

  Node * head = nullptr;

  int count = 0;

  // create a linked list of size SIZE with random numbers 0-99
  for (int i = 0; i < SIZE; i++) {
      int tmp_val = rand() % 100;
      Node * newVal = new Node;

  }

  while(input != -1){
    cout << "Here are your options with the Linked List:" << endl;
    cout << "1. Add Node to Head" << endl;
    cout << "2. Add Node to Tail" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Insert Node" << endl;
    cout << "5. Delete List" << endl;
    cout << "6. Print List" << endl;
    cout << "Enter -1 to Exit" << endl;
    
  }

}

void addNodeHead(Node *& newVal){
    // adds node at head

    int tmp_val;
    if (!head) {
        head = newVal;
        newVal -> next = nullptr;
        newVal -> value = tmp_val;
    }
    else {

      newVal -> next = head;
      newVal -> value = tmp_val;
      head = newVal;

    }
  
  output(head);

}



  // deleting a node
  void deleteNode(Node *&head){
    cout << "Which node to delete? " << endl;
    output(head);
    int entry;
    cout << "Choice --> ";
    cin >> entry;
    // traverse that many times and delete that node
    Node * current = head;
    Node * prev = nullptr; // start prev as nullptr to detect head deletion
    for (int i = 0; i < (entry - 1); i++) {
      prev = current;
      current = current -> next;
    }
  // at this point, delete current and reroute pointers
    if (current) {
      if (prev == nullptr) {
        // deleting the head node
        head = current -> next;
      } else {
        prev -> next = current -> next;
      }
      delete current;
      current = nullptr;
    }
    output(head);
}

void insertNode(Node *&){
  // insert a node
  cout << "After which node to insert 10000? " << endl;
  count = 1;
  current = head;
  while (current) {
    cout << "[" << count++ << "] " << current -> value << endl;
    current = current -> next;
  }
  cout << "Choice --> ";
  cin >> entry;
  current = head;
  prev = nullptr; // reset prev to nullptr for same reason
  for (int i = 0; i < entry; i++) {
    prev = current;
    current = current -> next;
  }
  // at this point, insert a node between prev and current
  Node * newnode = new Node;
  newnode -> value = 10000;
  newnode -> next = current;
  if (prev == nullptr) {
    // inserting before the head
    head = newnode;
  } else {
    prev -> next = newnode;
  }
  output(head);
}


  void deleteList(Node *&){
  // deleting the linked list
  current = head;
  while (current) {
    head = current -> next;
    delete current;
    current = head;
  }

  head = nullptr;

  output(head);
}




void output(Node * hd) {

  if (!hd) {

    cout << "Empty list.\n";

    return;
  }
  int count = 1;
  Node * current = hd;

  while (current) {
    cout << "[" << count++ << "] " << current -> value << endl;
    current = current -> next;
  }

  cout << endl;

}