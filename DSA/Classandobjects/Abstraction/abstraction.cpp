#include<bits/stdc++.h>
using namespace std;

class smartphone{
    public:
        virtual void takeselfie()=0;
        virtual void makeacall()=0;
};
class android:public smartphone{
public:
    void  takeselfie(){
        cout<<"Android selfie"<<endl;
    }
    void makeacall()
    {
        cout << "Android calling"<<endl;
    }
};

class iphone:public smartphone{
public:
    void takeselfie(){
        cout<<"iphone selfie"<<endl;
    }
    void makeacall()
    {
        cout << "iphone calling"<<endl;
    }
};
int main(){
    smartphone *s1=new android;
    s1->takeselfie();
    smartphone *s2=new iphone;
    s2->makeacall();
}