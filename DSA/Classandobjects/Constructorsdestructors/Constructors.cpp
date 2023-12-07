#include <bits/stdc++.h>
using namespace std;

class youtubechannel
{
public:
    string name;
    string ownername;
    int subscribercount;
    list<string> publishercount;

    youtubechannel(string n,string ow){
        name=n;
        ownername=ow;
    }
    void getinfo(){
        cout << endl;
        cout << name << endl;
        cout << ownername << endl;
        for (string videotitles : publishercount)
        {
            cout << videotitles << " ";
        }
    }
};

int main()
{
    youtubechannel yt1("utsav","singh");
    yt1.publishercount.push_back("ok by");
    yt1.publishercount.push_back("ju");
    yt1.publishercount.push_back("hy");
    youtubechannel yt2("Sardar","singh");
    yt2.publishercount.push_back("ku");
    yt2.publishercount.push_back("nu");
    yt2.publishercount.push_back("li");
    yt1.getinfo();
    yt2.getinfo();
}