
//with struct

// #include <bits/stdc++.h>
// using namespace std;

// struct youtubechannel
// {
//     string name;
//     int count;
//     youtubechannel(string n, int c)
//     {
//         name = n;
//         count = c;
//     }
//     bool operator==(const youtubechannel &channel)const{
//         return this->name==channel.name;
//     }
// };
// ostream& operator<<(ostream &COUT, youtubechannel &ytchannel)
// {
//     COUT << "Name:" << ytchannel.name << endl;
//     COUT << "Subscribers:" << ytchannel.count << endl;
//     return COUT;
// }

// struct Mycollection{
//     list<youtubechannel>mychannels;
//     void operator+=(youtubechannel&channel){
//         this->mychannels.push_back(channel);
//     }
//     void operator-=(youtubechannel &channel){
//         this->mychannels.remove(channel);
//     }
// };
// ostream&operator<<(ostream& COUT,Mycollection&mycollection){
//     for(youtubechannel namese:mycollection.mychannels)
//         COUT<<namese<<endl;
//     return COUT;
// }
// int main()
// {
//     youtubechannel yt1 = youtubechannel("utsav", 10000);
//     youtubechannel yt2 = youtubechannel("singh", 5000);
//     Mycollection mycollection;
//     mycollection+=yt1;
//     mycollection+=yt2;
//     mycollection-=yt2;
//     mycollection+=yt2;
//     cout<<mycollection;
//     // operator<<(cout,yt1);
// }   



/// with class

#include <iostream>
#include <string>
#include <list>
using namespace std;

class YouTubeChannel
{
    string Name;
    int SubscribersCount;

public:
    YouTubeChannel(string name, int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const
    {
        return this->Name == channel.Name;
    }

    friend ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel);
};
ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel)
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}
class MyCollection
{
    list<YouTubeChannel> myChannels;

public:
    void operator+=(YouTubeChannel &channel)
    {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel &channel)
    {
        this->myChannels.remove(channel);
    }
    friend ostream &operator<<(ostream &COUT, MyCollection &myCollection);
};
ostream &operator<<(ostream &COUT, MyCollection &myCollection)
{
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    // myCollection -= yt2;

    cout << myCollection;

    cin.get();
}