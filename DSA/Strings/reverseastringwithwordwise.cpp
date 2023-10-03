

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string a;
//     getline(cin,a);
//     istringstream ss(a);
//     string token;
//     vector<string>tokens;
//     string reversedstring;
//         while(ss>>token){
//             tokens.push_back(token);
//         }
//         for(string &a:tokens){
//             reverse(a.begin(),a.end());
//         }
//         for(string &a:tokens){
//             if(!reversedstring.empty())
//             {
//                 reversedstring+=" ";
//             }
//             reversedstring+=a;
//         }
//         cout<<"Reversed string:"<<reversedstring<<endl;
//         // return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    istringstream ss(a);
    string token;
    vector<string> tokens;
    string reversedstring;
    while (ss >> token)
    {
        tokens.push_back(token);
    }
    for (string &a : tokens)
    {
        reverse(a.begin(), a.end());
    }
    for (string &a : tokens)
    {
        if (!reversedstring.empty())
        {
            reversedstring += " ";
        }
        reversedstring += a;
    }
    cout << reversedstring << endl;
}