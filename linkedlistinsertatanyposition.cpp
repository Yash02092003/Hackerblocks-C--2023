//linked list insert at tail
#include <iostream>
using namespace std;
class node {
public:
    int data;
    node * next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertathead(node * &head , node * &tail , int data)
{
    node*y=new node(data);
    if(head == NULL)
    {
        head = y;
        tail = y;
    }
    else
    {
        y->next=head;
        head=y;
    }
}
void insertattail(node * &head , node * &tail , int d)
{
    node * y = new node(d);
    if(head == NULL)
    {
        head = y;
        tail = y;
    }
    else
    {
        tail->next = y;
        tail = y;
    }
}
void print(node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }
}
int lenofll(node * head)
{
    if(head == NULL)
    {
        return 0;
    }
    return 1 + lenofll(head->next);
}
void insertinbetween(node * &head , node * &tail , int pos , int d)
{
    node * y = new node(d);
    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL and head == tail)
    {
        head = y;
        tail = y;
    }
    else if(pos == 0)
    {
        insertathead(head , tail , d);
    }
    else if(pos >= lenofll(head))
    {
        insertattail(head , tail , d);
    }
    else
    {
        node * temp = head;
        for(int i = 1 ; i <=pos - 1 ; i++)
        {
            temp = temp->next;
        }
        y->next = temp->next;
        temp->next = y;
    }
}
int main(){
    node * head = NULL;
    node * tail = NULL;
    int t;
    cin>>t;
    for(int i = 1 ; i <= t ; i++)
    {
        int d;
        cin>>d;
        insertattail(head , tail , d);
    }
    int h;
    cin>>h;
    for(int i = 1 ; i <= h ; i++)
    {
        int d;
        cin>>d;
        insertathead(head , tail , d);
    }
    print(head);
    int pos;
    cin>>pos;
    int d;
    cin>>d;
    insertinbetween(head , tail , pos , d);
    print(head);
}
