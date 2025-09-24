#include <iostream>
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

Node* search(Node* head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp-> data == key){
            return temp;
        }
        temp = temp->next;
    } 
    return NULL;
    
}

int main(){
    return 0;
}
