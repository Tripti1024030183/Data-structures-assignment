#include<iostream> 
using namespace std; 
#define SIZE 5 
 
class Stack{ 
    int element[SIZE]; 
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
    void push(int x){ 
        if(isFull()){ 
            cout<<"stack overflow"<<endl; 
        } 
        else{ 
            element[++top]=-x; 
            cout<<x <<" pushed into stack"<<endl; 
        } 
    } 
     void pop(){ 
         if(isEmpty()){ 
             cout<<"stack underflow:"<<endl; 
         } 
         else 
        { 
            cout<<element[top--]<<" popped from stack"<<endl; 
        } 
     } 
      
     void peek(){ 
         if(isEmpty()){ 
             cout<<"stack is empty"<<endl; 
         } 
         else{ 
             cout<<"top element is:"<<element[top]<<endl; 
         } 
     } 
     void display(){ 
         if(isEmpty()){ 
             cout<<"stack is empty"<<endl; 
         } 
         else{ 
             cout<<"stack element are:"; 
             for(int i=top;i>=0;i--){ 
                 cout<<element[i]<<" "; 
             } 
             cout<<endl; 
         } 
     } 
}; 
int main(){ 
    Stack S; 
    S.push(10); 
    S.push(20); 
    S.push(30); 
    S.push(40); 
    S.push(50); 
    S.push(60); 
    S.display(); 
    S.pop(); 
    S.peek(); 
    S.display(); 
     
    cout<<(S.isEmpty()? "stack is empty":"stack is not empty")<<endl; 
    cout<<(S.isFull()? "stack is full":"stack is not full")<<endl; 
return 0;}
