#include <bits/stdc++.h>
using namespace std;
struct Node {
    int item;
    Node *next;
};
class Stack {
    private:
    Node *top;
    int size;
    public:
    Stack(){
        top=NULL;
        size=0;
    }
    void push(int data) {
    size++;
    Node* newNode = new Node();
    newNode->item=data;
    newNode->next=NULL;
    if(top==NULL) {
        top=newNode;
        newNode->next=NULL;
    }
    else {
        newNode->next=top;
        top=newNode;
    }
    }

    int pop() {
    if(size==0) return -1;
    return top->item;
    }
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    int numOfElement() {
        return size;
    }
    void print() {
        Node *tmp;
        tmp=top;
        while(tmp!=NULL) {
             cout<<tmp->item<<" ";
             tmp=tmp->next;
        }
    }

};
int main() {
    Stack s;
    cout<<s.isEmpty()<<endl;
    s.push(1);
    s.push(2);
    cout<<s.isEmpty()<<endl;
    cout<<s.numOfElement()<<endl;
    s.print();
}