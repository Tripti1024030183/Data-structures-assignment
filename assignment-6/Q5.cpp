#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

bool isCircular(Node* head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(5); 
    head->next->next->next->next->next = head;

    if(isCircular(head)){
        cout << "The linked list is circular." << endl;
    } else {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}