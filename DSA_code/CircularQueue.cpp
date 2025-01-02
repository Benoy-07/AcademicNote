#include<iostream>
#include<string>
using namespace std;
class CircularQueue
{
  private:
   int front=-1,rear=-1;
   int arr[5];
   int item=0;
 public:
    CircularQueue()
    {
        for(int i=0; i<5; i++)
        arr[i] =0;

    }
    void Enqueue(int x)
    {
        if((rear+1)%5==front)
        cout<<"full"<<endl;
        else
        {
            if(front==-1)
            front=0;

            rear=(rear+1)%5;
            arr[rear] =x;
            item++;
        }
    }
    void Dequeue()
    {
        if(front==-1)
        cout<<"empty"<<endl;
        else
        {
           
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
            arr[front] =0;
            front=(front+1)%5;
            }
           item--;
        }
    }
    int peek(int pos)
    {
        if(front==-1)
        {
        cout<<"empty"<<endl;
        return 0;
        }
        else
        return arr[pos-1];
    }
    int count()
    {
        return (item);
    }
    void change(int pos,int value)
    {
        arr[pos-1] =value;
    }
    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main()
{
    CircularQueue s1;
    int position,option,value;
    do{
        cout<<"exit 0"<<endl;
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.peek"<<endl;
        cout<<"4.count"<<endl;
        cout<<"5.change"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.screen clear"<<endl;

        cin>>option;
        switch (option)
        {
        case 0:
        break;
        case 1:
        cin>> value;
        s1.Enqueue(value);
        break;
        case 2:
        s1.Dequeue();
        break;
        case 3:
        cin>>position;
        cout<<s1.peek(position)<<endl;
        break;
        case 4:
        cout<<s1.count()<<endl;
        break;
        case 5:
        cin>>position>>value;
        s1.change(position,value);
        break;
        case 6:
        s1.display();
        break;
        case 7:
        system("cls");
        break;
        default: 
        cout<<"right"<<endl;
        
        } 

    }while(option!=0);


}
