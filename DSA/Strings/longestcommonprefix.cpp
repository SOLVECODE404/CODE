#include <bits/stdc++.h>
using namespace std;

string longestprefix(vector<string> &s)
{
    int count = 0, min = 1000;
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        int len = s[i].length();
        if (len < min)
        {
            min = len;
            str = s[i];
        }
    }
    for (int i = 0; i < min; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j][i] != str[i])
            {
                return str.substr(0, count);
            }
        }
        count++;
    }
    if(count==0)return "";
    else{
    return str.substr(0, count);}
}

int main()
{
    vector<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        s.push_back(input);
    }
    cout << longestprefix(s);
    return 0;
}
