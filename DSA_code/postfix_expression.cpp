#include <bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std; 
int main()
{
    int ar1[10],a=0,b=0,c=0,i=0;
    string q;
    getline(cin, q);
    q=q+" )";
    cout << q;
    int len=q.length(),j=-1;
    cout<<len<<endl;
    while(q[i]!=')')
    {
        
        if(q[i]!='+'||q[i]!='-'||q[i]!='*'||q[i]!='/')
        {
            
            j++;
            ar1[j]=q[i]-'0';
            cout<<ar1[j]<<endl;
            i=i+2;
        }
        else 
        {
            a=ar1[j];
            b=ar1[j-1];
           if(q[i]=='+')
           {
           c=a+b;
           cout<<c<<endl;
           }
           else if(q[i]=='-')
           {
           c=b-a;
            cout<<c<<endl;
           }
           else if(q[i]=='*')
           {
           c=a*b;
            cout<<c<<endl;
           }
           else
           {
           c=b/a;
            cout<<c<<endl;
           }

           j--;
           i=i+2;
           ar1[j]=c;
           cout<<ar1[j];
        }
       
    }
    cout<<ar1[j]<<endl;
}