#include <iostream>
using namespace std;

class DoublyLinkedList{
    private:
    struct Node{
        int data;
        Node*next;
        Node* prev;
    };
    Node* head;
    public:
    DoublyLinkedList(){
        head = NULL;
    }

   void insert(int value){
        Node* newNode = new Node();
        newNode->data = value;

        if (head == NULL){
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
        } 
        else{
            Node* tail = head->prev;

            tail->next = newNode;
            newNode->prev = tail;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    int size(){
        if (head == NULL){
            return 0;
        }
        int count = 1;
        Node* temp = head->next;
        while (temp != head){
            count++;
            temp = temp->next;
        }
        cout<<"Size of the circular doubly linked list: "<<count<<endl;
        return count;
    }
};

int main(){
    DoublyLinkedList dll;
    dll.insert(10);
    dll.insert(20);
    dll.insert(30);
    dll.insert(40);
    dll.size();
    return 0;
}