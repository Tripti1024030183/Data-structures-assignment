#include<iostream> 
using namespace std; 
#define size 5 
 
class stack{ 
    int arr[size]; 
    int top=-1; 
     
    public: 
    stack(){ 
        top=-1; 
    } 
     bool isEmpty(){ 
         return top==-1; 
     } 
      
      bool isFull(){ 
          return top==size-1; 
      } 
       
      void push(int x){ 
          if (isFull()){ 
              cout<<"stack overflow"<<endl; 
          } 
          else{ 
              arr[++top]=x; 
              cout<<x<<"pushed into stack"<<endl; 
          } 
      } 
       
      void pop(){ 
          if(isEmpty()){ 
              cout<<"stack underflow"<<endl; 
          } 
          else{ 
              cout<<arr[top--]<<"popped from stack"<<endl; 
          } 
      } 
       
      void peek(){ 
           if (isEmpty()) { 
            cout << "Stack is empty!" << endl; 
        } else { 
            cout << "Top element is: " << arr[top] << endl; 
        } 
      } 
       
      void display(){ 
          if(isEmpty()){ 
              cout<<"stack is empty"<<endl; 
          } 
          else{ 
              cout<<"stack elements are:"; 
              for(int i=top;i>=0;i--){ 
                  cout<<arr[i]<<" "; 
              } 
              cout<<endl; 
          } 
      } 
}; 
int main(){ 
    stack s; 
    int choice,value; 
     
    do{ 
        cout<<"\n stack menu\n"; 
        cout<<"1.push\n"; 
        cout<<"2.pop\n"; 
        cout<<"3.peek\n"; 
        cout<<"4.display\n"; 
        cout<<"5.check is empty\n"; 
        cout<<"6. check is full\n"; 
        cout<<"7.exit\n"; 
        cout<<"enter your choice\n"; 
        cin>>choice; 
         
        switch(choice){ 
            case 1: 
            cout<<"enter value to push:"; 
            cin>>value; 
            s.push(value); 
            break; 
             
            case 2: 
            s.pop(); 
            break; 
             
            case 3: 
            s.peek(); 
            break; 
             
            case 4: 
            s.display(); 
            break; 
             
            case 5: 
            if(s.isEmpty()){ 
                cout<<"stack is empty"<<endl; 
            } 
            else 
            cout<<"stack is not empty"<<endl; 
            break; 
             
            case 6: 
            if (s.isFull()) 
                cout << "Stack is full." << endl; 
            else 
                cout << "Stack is not full." << endl; 
            break; 
        case 7: 
            cout << "Exiting program..." << endl; 
            break; 
        default: 
            cout << "Invalid choice! Try again." << endl; 
        } 
        }while(choice !=7); 
return 0;
}
