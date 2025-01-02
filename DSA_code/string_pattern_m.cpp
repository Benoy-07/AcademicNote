#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length();
    int l2 = s2.length();
    int max=l1-l2+1;
    bool f=true;
    for(int i=1;i<=max;i++)
    {
         f=true;
        for(int j=0;j<l2&& f==true;j++)
        {
            if(s2[j]!=s1[j+i-1])
               f=false;
        }
        if(f==true)
        {
            cout<< "matching";
            break;
        }
    }
    if(f==false)
    {
        cout<<"no match";
        
    }

}