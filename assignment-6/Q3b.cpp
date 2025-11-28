#include <iostream>
using namespace std;

class CircularLinkedList{
    private:
    struct Node{
        int data;
        Node* next;
    };
    Node* head;
    public:
    CircularLinkedList(){
        head = NULL;
    }

    void insert(int value){
        Node* newNode = new Node();
        newNode->data = value;
        if(head == NULL){
            head = newNode;
            newNode->next = head;
        }
        else{
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    int size(){
        if(head == NULL){
            return 0;
        }
        int count = 1;
        Node* temp = head->next;
        while(temp != head){
            count++;
            temp = temp->next;
        }
        cout<<"Size of the circular linked list: "<<count<<endl;
        return count;
    }
};

int main(){
    CircularLinkedList cll;
    cll.insert(5);
    cll.insert(15);
    cll.insert(25);
    cll.insert(35);
    cll.size();
    return 0;
}