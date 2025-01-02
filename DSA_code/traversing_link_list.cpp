#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
    Node *newnode=new Node;
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
   else{ Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   }
}

void travers()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
}
int main()
{
    int f,l,p,k;
    cout<<"enter the number of element\n";
    cin >> f;
    for(int i=0; i<f; i++)
    {
        cin>>l;
        insert(l);
    }
        
    travers();
}