#include<bits/stdc++.h>
using namespace std;

class Printer{
    string name;
    int _availablepaper;
    public:
    Printer(string n,int ava){
        name=n;
        _availablepaper=ava;
    }
    void Print(string txtdoc){
        int reqpaper=txtdoc.length()/10;
        if(reqpaper >_availablepaper)
            throw 12;
        cout<<"Printing.."<<txtdoc<<endl;
        _availablepaper-=reqpaper;
    }

};
int main(){
    Printer myprinter("jp",5);
    try{
        myprinter.Print("hellogcgchgghfhgfhgfhgf");
        myprinter.Print("okghfgfhgfhgfhgfgfghfhgfgf");
        myprinter.Print("byhgfhtseseaseaeaeaeaeaeaea");
    }
    catch(const char *txtException){cout<<"Exception:"<<txtException<<endl;}
    catch(int exCode){cout<<"Exception:"<<exCode<<endl;}
    catch(...){cout<<"Expection happened!"<<endl;}
} 