#include <bits/stdc++.h>
using namespace std;

string longestword(const string &word)
{
    string longestwrd;
    int startpos = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (i == word.length() || word[i] == '\n' || word[i] == ' ')
        {
            string currentword = word.substr(startpos, i - startpos);
            if (currentword.length() > longestwrd.length())
            {
                longestwrd = currentword;
            }
            startpos = i + 1;                                                                                                                                                                                                                                                                                                                                                               
        }
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    return longestwrd;
}

int main()
{
    string word = "in the year technology is the biggest thing that last long for now.";
    cout << longestword(word);
    return 0;
}
