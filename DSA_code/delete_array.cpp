#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],n,p,x;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the value"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the deleted  position"<<endl;
    cin>>p;
    x=a[p-1];
    for(int i=p-1;i<n-1;i++)
    {
        a[i] =a[i+1];

    }
    
    n--;
    cout<<"new array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<< "Deleted element is "<<x<<endl; 
}