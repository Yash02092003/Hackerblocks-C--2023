//linked list deleting a node in between
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
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
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void deleteattail(node * &head , node * &tail)
{
    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        node * temp = head;
        while(temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}
void deleteathead(node * &head , node * &tail)
{
    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        node * temp = head->next;
        delete head;
        head = temp;
    }
}
int llrec(node * head)
{
    if(head == NULL)
    {
        return 0;
    }
    return 1+llrec(head->next);
}
void deleteinbetween(node * &head , node * &tail , int pos)
{
    if(head == NULL)
    {
        return;
    }
    else if(pos == 0)
    {
        deleteathead(head , tail);
    }
    else if(pos >= llrec(head))
    {
        deleteattail(head , tail);
    }
    else
    {
        node * temp = head;
        for(int i = 1 ; i <= pos - 1 ; i++)
        {
            temp = temp->next;
        }
        node * p = temp->next;
        temp->next = p->next;
        delete p;
        p = NULL;
        
    }
}
int main(){
    node * head = NULL;
    node * tail = NULL;
    int n;
    cin>>n;
    for(int i = 1 ; i <=n ; i++)
    {
        int d;
        cin>>d;
        insertattail(head , tail , d);
    }
    print(head);
    int pos;
    cin>>pos;
    deleteinbetween(head,tail,pos);
    print(head);
    return 0;
}
