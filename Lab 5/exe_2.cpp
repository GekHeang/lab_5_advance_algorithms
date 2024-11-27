#include<iostream>
#include<string>
using namespace std;
struct Node{
    int value;
    Node *next;
};

class Queue{
    public:
    Node *front;
    Node *rear;
    int length;

    void enqueue(int value){
        Node *box;
        box = new Node;
        box->value = value;
        box->next = rear;
        front = box;
        length++;
    }

    string print(){
        string display;
        Node *temp;
        temp = front;
        while (temp != NULL)
        {
            display += temp->value;
            temp = front->next;
        }
        return display;
    }
};
int main(){
    Queue *my_queue = new Queue;
    my_queue->enqueue(15);
    my_queue->enqueue(25);
    my_queue->enqueue(35);
    my_queue->print();
}