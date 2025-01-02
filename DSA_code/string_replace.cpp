#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    size_t ind=s.find("AB");
    string s2 = "c";
    while(ind!=string::npos)
    {
       s.replace(ind,2,s2);
        ind=s.find("AB");
    }
    cout << s;

    
}