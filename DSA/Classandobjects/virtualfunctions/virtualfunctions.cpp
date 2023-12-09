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

    //early binding is when the known of execution is known earlier at time of writing the code to getinfo from the function ...../
    Instrument *i1=new Accordian();//late binding in which the execution is known at time of runtime ...../
    // i1->makesound();
    Instrument *i2=new Piano();
    // i2->makesound();
    Instrument *instruments[]={i1,i2};
    for(int i=0;i<2;i++){
        instruments[i]->makesound();
    }
} 