#include <bits/stdc++.h>
using namespace std;
template <class ForwardIterator, class T, class Bookcmp>
ForwardIterator search2(ForwardIterator start, ForwardIterator end, T key, Bookcmp cmp)
{
    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }
        start++;
    }
    return end;
}
class Book
{
public:
    int no;
    string name;
    Book(int no, string name):no(no),name(name){};
};
class Bookcompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
            return true;
        else
            return false;
    }
};

int main()
{
    Book b1(200, "c++");
    Book b2(300, "d++");
    Book b3(400, "e++");
    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    Book booktofind(100, "c++");
    Bookcompare cmp;
    auto it = search2(l.begin(), l.end(), booktofind, cmp);
    if (it != l.end())
    {
        cout<<"Book find in the library";
    }
    else{cout<<"not found";}
}