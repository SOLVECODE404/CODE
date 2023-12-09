#include <bits/stdc++.h>
using namespace std;
class Book
{
public:
    string name;
    string title;
    float *rates;
    int ratescounter;
    Book(string n, string t)
    {   
        name = n;
        title = t;
        rates = new float[ratescounter];
        rates[0] = 1;
        rates[2] = 3;
        cout << title + ":Constructor constructed" << endl;
    }
    ~Book()
    {
        delete[] rates;
        rates = nullptr;
        cout << title + ":Destructor destructed" << endl;
    }
    Book(const Book &original){
        name=original.name;
        title=original.title;
        ratescounter=original.ratescounter;
        rates=new float[ratescounter];
        for(int i=0;i<ratescounter;i++){
            rates[i]=original.rates[i];
        }
    }};
    void Printbook(Book book){
        cout<<"Title:" << book.name<<endl;
        cout<<"Author:"<< book.title<<endl;
        float sum=0;
        for(int i=0;i<book.ratescounter;i++){
            sum+=book.rates[i];
        }
        cout<<"Avg rates:"<<sum/book.ratescounter<<endl;
    }
int main()
{
    Book book1("Utsav", "rich dad");
    Book book2("Sachin", "poor dad");
    Book book3 = book2;
    Printbook(book1);
    Printbook(book2);
    Printbook(book3);
}