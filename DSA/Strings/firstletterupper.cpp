#include <iostream>
#include <cctype>

using namespace std;

void capitalizeWords(string &input)
{
    bool newword=true;
    for(char &ch:input){
        if(newword && isalpha(ch)){
            ch=toupper(ch);
            newword=false;
        }
        else if(isspace(ch)){
            newword=true;
        }
        else{
            ch=tolower(ch);
        }
    }
}

int main()
{
    string input;
    cout << "Enter a string containing employee titles: ";
    getline(cin, input);

    capitalizeWords(input);

    cout << "Formatted string: " << input << endl;

    return 0;
}
