#include <bits/stdc++.h>
using namespace std;

template <typename T>
class weight
{
private:
    T kg;

public:
    void setdata(T x) { kg = x; }void display();
};
template<class T>
void weight<T>::display(){
    cout<<"Weight:"<<kg;
}

// void func(int a){
//     cout<<a<<endl;
// }
template<typename T>
void func(T a){
    cout<<a<<endl;
}
int main()
{
    // weight<int> obj1;
    // obj1.setdata(5);
    // obj1.display();
    func(4.533444);
}

//function overloading term is for that if exact function is present then that it will be executed with highest priority
//otherwise the left function which can be maded with the help of template without defining datatype it will be executed ...