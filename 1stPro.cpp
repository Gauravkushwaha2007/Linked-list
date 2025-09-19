#include <iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;
    Node (int value){
        data = value;
        next = NULL;
    }
};

class List {
    public:
    Node* head;
    Node* tail;
    List (){
        head = tail= NULL;
    }

    
    void push_b(int value){
        Node* newNode = new Node(value);
        if (head == NULL){
            head = tail = newNode;
            tail->next = NULL;
        }
        else {
            tail-> next = newNode;
            tail = newNode;
        }
    }

    
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = NULL;
        }
        else{
            Node* temp = head;
            head = newNode;
            head->next = temp;
        }
    }


    void pop_front(){
        if(head == NULL){
            cout<< "The LL is empty : "<< endl;
        }
        else{

        }
    }


    void display (){
        Node* temp = head;
        while (temp!=NULL){
            cout<< temp->data << " -> " ;
            temp = temp->next;
        }
        cout<< "Null : "<< endl;
    }
};

int main(){
    List ll;
    ll.push_b(20);
    ll.display();
    ll.push_b(100);
    ll.push_b(200);
    ll.push_front(500);
    ll.display();
    return 0;
}
