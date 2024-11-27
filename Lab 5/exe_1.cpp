#include<iostream>
#include<string>
using namespace std;
struct Node{
    int value;
    Node *next;
};
class Stack{
    public:
    Node *top;
    int length;

    Stack(){
        length = 0;
        top = NULL;
    }

    void push (int value){
        Node *box;
        box = new Node;
        box->value = value;
        box->next = top;
        top = box;
        length++;
    }

    void pop(){
        if(length == 0){
            cout << "The stack is empty. Cannot delete" << endl;
        }
        else{
            Node *temp;
            temp = top;
            top = top->next;
            delete temp;
            length--;
        }
    }
    int peek(){
        if (length == 0)
        {
            cout << "Stack is empty. Cannot look at the top value" << endl;
        }
        else{
            return top->value;
        }
    }
    bool isEmpty(){
        if (length != 0)
        {
            return false;
        }
        else{
            return true;
        }
    }
    int size(){
        return length;
    }

    string print(){
        Node *temp;
        temp = top;
        string display;
        while(temp != NULL){
            display += to_string(temp->value) + "\n";
            temp = top->next;
        }
        return display;
    }
};
int main(){
    Stack *my_stack = new Stack;
    my_stack->push(15);
    my_stack->push(25);
    my_stack->push(35);
    my_stack->push(45);
    my_stack->print();
    return 0;
}