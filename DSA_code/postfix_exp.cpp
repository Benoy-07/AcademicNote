#include <bits/stdc++.h>
using namespace std;
void value(string s)
{
    int a[20];
    int top = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            string ss;
            ss.push_back(s[i]);
            while (s[i + 1] >= 48 && s[i + 1] <= 57)
            {
                ss.push_back(s[i + 1]);
                i++;
            }
            top++;
            a[top] = stoi(ss);
        }
        else if(s[i] == ' ')
        continue;
        else
        {
            int fst, snd;
            fst = a[top];
            --top;
            snd = a[top];
            --top;
            if(s[i] == '+')
            {
                ++top;
                a[top] = fst + snd;
            }
            else if(s[i] == '-')
            {
                ++top;
                a[top] = snd - fst;
            }
            else if(s[i] == '*')
            {
                ++top;
                a[top] = fst * snd;
            }
            else if(s[i] == '/')
            {
                ++top;
                a[top] = snd / fst;
            }
        }
    }
    cout  << a[top] << endl;
}
int main()
{
    string s;
    getline(cin, s);
    value(s);
}
