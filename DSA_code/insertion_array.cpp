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
    cout<<"Enter the new value and his position"<<endl;
    cin>>x>>p;
    for(int i=n;i>p-1;i--)
    {
        a[i] =a[i-1];

    }
    a[p-1] =x;
    n++;
    cout<<"New array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}