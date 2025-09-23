#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node(int value){
    data = value;
    next = NULL;
  }
};

void user_list (Node* &head){
  int n;
  cout<< "How many nodes you want: " ;
  cin >> n;
  for( int i=0; i<n; i++){
    int value;
    cout<< "Enter elements: "<< i+1<< " : ";
    cin>> value;
    Node* newNode = new Node(value);

    if(head==NULL){
      head = newNode;
    }
    else{
      Node* temp = head;
      while(temp->next!= NULL){
        temp = temp->next;
      }
      if(temp ==NULL){
        cout<< "Invalid position: "<<endl;
      }
      temp-> next = newNode;
    }
  }
}



Node* reverse_list(Node* & head){
  Node* prev = NULL;
  Node* curr = head;
  Node* next = NULL;
  while( curr!= NULL){
    next = curr-> next;
    curr-> next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

void display(Node* &head){
  Node* temp = head;
  while(temp!= NULL){
    cout<< temp-> data << "->";
    temp = temp-> next;
  }
  cout<< "NULL ";
}


int main (){
  Node* head = NULL;
  user_list(head);
  cout<< "Original List is: "<< endl;
  display(head);
  cout<< "Reversed List is : " << endl;
  head = reverse_list(head);
  display(head);
  return 0;
}
