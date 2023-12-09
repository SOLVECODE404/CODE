#include <bits/stdc++.h>
using namespace std;

class youtubechannel
{
private:
    string name;
    list<string> publishercount;

protected:
    int subscribercount;
    string ownername;
    int contentquality;
public:
    youtubechannel(string n, string ow)
    {
        name = n;
        ownername = ow;
    }
    void checkanalytics(){
        if(contentquality<5){
            cout<<name<<" has bad quality:"<<endl;
        }
        else{
            cout<<name<<" has great content:"<<endl;
        }
    }
};

class Cookingyoutubechannel : public youtubechannel
{
public:
    Cookingyoutubechannel(string name, string ownername) : youtubechannel(name, ownername) {}
    void practice() { cout << ownername << "  practising..cooking."<<endl;contentquality++;}
};

class Singersyoutubechannel : public youtubechannel
{
public:
    Singersyoutubechannel(string name, string ownername) : youtubechannel(name, ownername) {}
    void practice() { cout << ownername << " practising..singing."<<endl;contentquality++;}
};
int main()
{
    Cookingyoutubechannel yt3("malik", "utsav");
    Singersyoutubechannel yt4("zayn","sachin");
    youtubechannel *yt5=&yt3;
    youtubechannel *yt6=&yt4;   
    yt3.practice();
    yt4.practice();
    yt4.practice();
    yt4.practice();
    yt4.practice();
    yt4.practice();
    yt4.practice();
    yt5->checkanalytics();
    yt6->checkanalytics();
}