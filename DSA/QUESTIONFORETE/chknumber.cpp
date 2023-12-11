#include<bits/stdc++.h>
using namespace std;

class chknumber{
    protected:
    double value;
    public:
    chknumber(double num)
    {value=num;
    if(value>0)cout<<"positive";
    else if(value==0)cout<<"zero";
    else cout<<"negative";}
};
int main(){
    chknumber(-5);
}