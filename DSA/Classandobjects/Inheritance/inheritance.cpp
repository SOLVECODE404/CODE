#include <bits/stdc++.h>
using namespace std;

class youtubechannel
{
private:
    string name;
    int subscribercount;
    list<string>publishercount;
protected:
    string ownername;
public:
    youtubechannel(string n, string ow)
    {
        name = n;
        ownername = ow;
    }
    void getinfo()
    {
        cout << endl;
        cout << name << endl;
        cout << ownername << endl;
        cout << subscribercount << endl;
        for (string videotitles : publishercount)
        {
            cout << videotitles << " ";
        }
    }
    void Subscribe()
    {
        subscribercount++;
    }
    void Unsubscribe()
    {
        if (subscribercount > 0)
            subscribercount--;
    }
};

class Cookingyoutubechannel:public youtubechannel{
    public:
        Cookingyoutubechannel(string name,string ownername):youtubechannel(name,ownername){}
        void practice(){cout<<ownername<<" is practising...";}
};

int main()
{
    youtubechannel yt1("utsav", "singh");
    youtubechannel yt2("Sardar", "singh");
    Cookingyoutubechannel yt3("amys","singh");  
    yt3.practice();
    yt1.Subscribe();
    yt1.Subscribe();
    yt1.Subscribe();
    yt1.Unsubscribe();
    yt1.getinfo();
    yt2.getinfo();
}