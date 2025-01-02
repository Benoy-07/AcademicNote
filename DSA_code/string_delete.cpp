#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int ind=s.find("AB");
    while(ind!=string::npos)
    {
        s.erase(ind,2);
        ind=s.find("AB");
    }
    cout << s;

    
}