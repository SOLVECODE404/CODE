#include<bits/stdc++.h>
using namespace std;

class Equilateraltriangle{
    private:
        float a;
        float circumference;
        float area;
    public:
        void setA(float length){
            a=length;
            circumference=a*3;
            area=(1.73*a*a)/4;
        }
    friend void Printresults(Equilateraltriangle);//friend function declaration
    friend class homework;//friend class declaration
};
class homework{//freind class 
    public:
    void Printresultss(Equilateraltriangle et)
    {
        cout << "Circumference:" << et.circumference << endl;
        cout << "area:" << et.area << endl;
    }
};
void Printresults(Equilateraltriangle et){//friend function
    cout<<"Circumference:"<<et.circumference<<endl;
    cout<<"area:"<<et.area<<endl;
}
int main(){
    Equilateraltriangle et;
    et.setA(3);
    homework h;
    h.Printresultss(et);
}