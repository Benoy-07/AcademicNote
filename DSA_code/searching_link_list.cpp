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
void print()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
 int search(int key)
 {
    Node *temp=head;
    int pos=1;
    while(temp!=NULL) 
    {
        if(temp->data==key)
        return pos;
        temp=temp->next;
        pos++;
    }
    return -1;
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
    print();
    cout<<"\nenter the searching element\n";
    cin>>p;
    int position =search(p);
    if(position == -1)
    cout<<"not found\n";
    else
    cout<<"found at "<<"position: "<<" "<<position;
}