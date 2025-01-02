#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node* next;

    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }

    Node(int k,int d)
    {
        key=k;
        data=d;
    }
};

class SingleLinkedList
{
    public:
    Node* head;

    SingleLinkedList()
    {
        head=NULL;
    }

    SingleLinkedList(Node* n)
    {
        head=n;
    }

    Node* nodeExists(int k)
    {
        Node* temp = NULL;
        Node* ptr=head;

        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp = ptr;
            }

            ptr=ptr->next;
        }
        return temp;
    } 

    void appendNode(Node* n)
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"N A e"<<endl;
        }
        else {
            if(head==NULL)
            {
                head=n;
                cout<<"N a"<<endl;
            }
            else{
                Node* ptr =head;

                while (ptr->next!=NULL)
                {
                    ptr =ptr->next;
                }

                ptr->next=n;
                cout<<"N a"<<endl;

                }
        }
    }

    void prepandNode(Node* n)
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"N A E"<<endl;

        }
        else
        {
            n->next=head;
            head=n;
            cout<<"N P"<<endl;
        }
    }

    void insertNodeAfter(int k,Node* n)
    {
        Node* ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"N n e w k v"<<endl;
        }
        else{
            if(nodeExists(n->key)!=NULL)
            cout<<"N A E"<<endl;
            else
            {
                n->next=ptr->next;
                ptr->next=n;
                cout<<"N I"<<endl;
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        if(head==NULL)
        {
            cout<<"C D"<<endl;
        }
        else if(head!=NULL)
        {
            if(head->key==k)
            {
                head=head->next;
                cout<<"delete"<<endl;
            }
            else{
                Node* temp=NULL;
                Node* prevptr=head;
                Node* currentptr=head->next;

                while(currentptr!=NULL)
                {
                    if(currentptr->key==k)
                    {
                        temp=currentptr;
                        currentptr=NULL;

                    }
                    else
                    {
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }

                if(temp!=NULL)
                {
                    prevptr->next=temp->next;
                    cout<<"delete"<<endl;
                }
                else{
                    cout<<"N D N E K V"<<endl;
                }
            }
        }
    }

    void updateNodeByKey(int k,int d)
    {
        Node* ptr=nodeExists(k);
        
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Updated"<<endl;
        }
        else{
            cout<<"N D N E K V"<<endl;
        }
    }

    void printList()
    {
        if(head==NULL)
        cout<<"N N I S L L"<<endl;
        else
        {
            cout<<endl<<"s l l v";
            Node* temp=head;

            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<")-->";
                temp=temp->next;
            }
        }
    }

};




int main()
{
    SingleLinkedList s;
    int option;
    int key1,k1,data1;

    do{
        cout<<"\nexit 0"<<endl;
        cout<<"1.append"<<endl;
        cout<<"2.prependnode"<<endl;
        cout<<"3.insert"<<endl;
        cout<<"4.delete"<<endl;
        cout<<"5.change"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.screen clear"<<endl;

        cin>>option;
        Node *n1= new Node();

        switch(option)
        {
            case 0:
            break;
            case 1:
            cout<<"Enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.appendNode(n1);
            break;
            case 2:
            cout<<"Enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.prepandNode(n1);
            break;
            case 3:
            cout<<"which position do you insert"<<endl;
            cin>>k1;
            cout<<"enter key and data of new node"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;

            s.insertNodeAfter(k1,n1);
            break;
            case 4:
            cout<<"delete node "<<endl;
            cin>>k1;
            s.deleteNodeByKey(k1);
            break;
            case 5:
            cout<<"update node "<<endl;
            cin>>key1;
            cin>>data1;
            s.updateNodeByKey(key1,data1);
            break;
            case 6:
            s.printList();
            break;
            case 7:
            system("cls");
            break;
            default:
            cout<<"enter proper option"<<endl;
        }

    }while(option!=0);
}