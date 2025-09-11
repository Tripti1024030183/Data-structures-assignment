#include<iostream> 
using namespace std; 
#define SIZE 100 
 
class Stack{ 
    int arr[SIZE]; 
    int top; 
     
    public: 
    Stack(){ 
        top=-1; 
    } 
    bool isFull(){ 
        return (top== SIZE-1); 
    } 
    bool isEmpty(){ 
        return (top == -1); 
    } 
    void push(char x){ 
        if(isFull()){ 
            cout<<"stack overflow"<<endl; 
        } 
        else{ 
            arr[++top]=x; 
        } 
    } 
     char pop(){ 
         if(isEmpty()){ 
             cout<<"stack underflow:"<<endl; 
         } 
         else 
        { 
            return arr[top--]; 
        } 
     } 
}; 
int main(){ 
    Stack S; 
    string str,reversed; 
     
    cout<<"enter a string:"; 
    cin>>str; 
     
    for(char c : str){ 
        S.push(c); 
    } 
    while (!S.isEmpty()) { 
        reversed += S.pop(); 
    } 
 
    cout << "Reversed string: " << reversed << endl; 
     
    return 0;}
