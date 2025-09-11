#include <iostream> 
#include <cstring> 
#include <cmath> 
using namespace std; 
 
#define SIZE 100 
 
class Stack { 
    int arr[SIZE]; 
    int top; 
 
public: 
    Stack() { 
        top = -1; 
    } 
 
    bool isEmpty() { 
        return (top == -1); 
    } 
 
    bool isFull() { 
        return (top == SIZE - 1); 
    } 
 
    void push(int x) { 
        if (!isFull()) { 
            arr[++top] = x; 
        } else { 
            cout << "Stack Overflow\n"; 
        } 
    } 
 
    int pop() { 
        if (!isEmpty()) { 
            return arr[top--]; 
        } else { 
            cout << "Stack Underflow\n"; 
            return -1; 
        } 
    } 
}; 
 
// Function to evaluate postfix expression 
int evaluatePostfix(char exp[]) { 
    Stack s; 
    for (int i = 0; exp[i] != '\0'; i++) { 
        char ch = exp[i]; 
 
        // If operand (digit), push to stack 
        if (ch >= '0' && ch <= '9') { 
            s.push(ch - '0'); // convert char digit to int 
        } 
        // If operator, pop two operands and apply operator 
        else { 
            int val2 = s.pop(); 
            int val1 = s.pop(); 
 
            switch (ch) { 
                case '+': s.push(val1 + val2); break; 
                case '-': s.push(val1 - val2); break; 
                case '*': s.push(val1 * val2); break; 
                case '/': s.push(val1 / val2); break; 
                case '^': s.push(pow(val1, val2)); break; 
            } 
        } 
    } 
    return s.pop(); 
} 
 
int main() { 
    char exp[SIZE]; 
    cout << "Enter postfix expression (single-digit operands): "; 
cin >> exp; 
cout << "Result = " << evaluatePostfix(exp) << endl; 
return 0; 
}
