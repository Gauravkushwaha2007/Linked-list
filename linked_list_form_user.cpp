#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  Node(int value){
    data = value;
    next = NULL;
  }
};


int main (){
  int n;
  cout<< "How many Node you want : ";
  cin >>n;
  
  Node*head = NULL;
  Node*tail = NULL;
  int value;
  for(int i=0; i<n; i++){
    cout<< "Enter  element " <<i+1 <<" : "<< endl;
    Node* newNode = new Node(value);
    if(head==NULL){
      head = tail = newNode;
    }
    else{
      tail-> next = newNode;
      tail= newNode;
    }
  }
  Node* temp = head;
  while(tmep!=NULL){
    cout << temp->data<< "->";
    temp = temp->next;
  }
  return 0;
}
