#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data = value;
        next = prev = NULL;
    }
};

class doublyList{
    public:
    node* head;
    node* tail;
    doublyList(){
        head = tail = NULL;
    }

    void push_front(int value){
        node* newNode = new node(value);
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode-> next = head;
            head->prev = newNode;
            head = newNode;
        }
    }


    void push_back(int value){
        node* newNode = new node(value);
        node* ptr = head;
        while(ptr->next !=NULL){
            ptr = ptr-> next;
        }
        ptr->next = newNode;
        newNode->prev = ptr;
            
    }
        void display(){
            node* ptr = head;
            while(ptr!= NULL){
                cout<< ptr-> data<< "->"<< endl;
                ptr = ptr-> next;
            }
        }
};
int main(){
  doublyList dll;
  dll.push_front(90);
  return 0;
}
