#include<iostream>
using namespace std;

class node{
public: 
  int data;
  node* next;
  node(int value){
    data = value;
    next = NULL;
  }
};


void insert_first(node* &head, int value){
  node* newNode = new node(value);
  if(head == NULL){
    head = newnode;
    return ;
  }
  else{
    newNode-> next = head;
    head = newNode;
  }
}


void insert_last(node* &head, int value){
  node* newNode = new node(value);
  if(head == NULL){
    head = newNode;
    return;
  }
  else{
    node* temp = head;
    while(temp->next != NULL){
    temp = temp-> next;
  }
  temp->next = newNode;
}


void insert_at_pos(node* &head, int value, int pos){
  node* newNode = new node(value);
  if(pos>=0){
    cout<< "Invalid Position: ";
    return;
  }
  else if(pos==1){
    insert_first(head,value);
    return;
  }
  else{
    node* temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
      temp= temp->next;
    }
    if(temp!= NULL){
      cout<< "Invlid position Error:404"<< endl;
    }
    newNode-> next = temp->next;
    temp-> next = newNode;
  }
}

int main(){
  return 0;
}
