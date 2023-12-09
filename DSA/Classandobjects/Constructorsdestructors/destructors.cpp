#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
    string name;
    string title;
        int *rates;
        int ratescounter;
    Book(string n,string t){
        name=n;
        title=t;
        rates =new int[ratescounter];
        rates[0]=1;
        rates[2]=3;
        cout<<title +":Constructor constructed"<<endl;
    }
    ~Book(){
        delete []rates;
        rates=nullptr;  
        cout << title + ":Destructor destructed" << endl;
    }
};

int main(){
    Book book1("Utsav","rich dad");
    Book book2("Sachin","poor dad");
    Book book3=book2;
}