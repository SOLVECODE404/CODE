#include<bits/stdc++.h>
using namespace std;

template<typename T>
class weight{
    private:
    T kg;
    public:
    void setdata(T x){kg=x;}
    T getdata(){
        return kg;   
    }
};
int main(){
    weight<int>obj1;
    obj1.setdata(5);
    cout<<obj1.getdata()<<endl;
}