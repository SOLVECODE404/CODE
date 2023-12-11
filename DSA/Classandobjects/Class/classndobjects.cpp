#include<bits/stdc++.h>
using namespace std;

class youtubechannel{
    public:
    string name;
    string ownername;
    int subscribercount;
    list<string>publishercount;
};

int main(){
    youtubechannel yt1;
    yt1.name="utsav";
    yt1.ownername="singh";
    yt1.publishercount={"ok","by","hy"};
    for(string videotitles:yt1.publishercount){
        cout<<videotitles<<" ";
    }cout<<endl;
    cout<<yt1.name<<endl;
    cout<<yt1.ownername<<endl;
}