//implement queue using linked list
#include <iostream>
#include <vector>
using namespace std;
class node{
public:
    int data;
    node*next;
    node(int d)
    {
        data = d;
        next = nullptr;
    }
};
class Queue{
    node*head;
    node*tail;
    int l;
public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
        l = 0;
    }
    void push(int d){
        node * x = new node(d);
        if(head == nullptr){
            head = x;
            tail = x;
        }
        else
        {
            tail->next = x;
            tail = x;
        }
        l++;
    }
    void pop()
    {
        if(head == nullptr)
        {
            return;
        }
        else if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            node * temp = head->next;
            delete head;
            head = temp;
        }
        l--;
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return l==0;
    }
    int size(){
        return l;
    }
};
int main(){
    Queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
}
