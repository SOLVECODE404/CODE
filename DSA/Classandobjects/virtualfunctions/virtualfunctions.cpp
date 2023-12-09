#include<bits/stdc++.h>
using namespace std;

class Instrument{//abstract class in which one is pure virtual function
    public:
    virtual void makesound()=0;//pure virtual function
};
class Accordian:public Instrument{
public:
    void makesound(){
        cout<<"Apple playing:"<<endl;
    }
};
class Piano : public Instrument
{
public:
    void makesound()
    {
        cout << "Piano playing:" << endl;
    }
};
int main(){
    Instrument *i1=new Accordian();
    // i1->makesound();
    Instrument *i2=new Piano();
    // i2->makesound();
    Instrument *instruments[]={i1,i2};
    for(int i=0;i<2;i++){
        instruments[i]->makesound();
    }
} 