//linked list deleting a node from tail
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
    deleteattail(head,tail);
    print(head);
    return 0;
}
