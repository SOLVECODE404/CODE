// #include<bits/stdc++.h>
// using namespace std;



// class abc{
//     int a;
//     static int b;
//     public:
//     void init(int i,int j){
//         a=i;
//         b=j;
//     }
//     void show(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }
// };int abc::b;
// int main(){
//     abc s1,s2;
//     s1.init(1,2);
//     s1.show();
//     s2.init(10,20);
//     s2.show();
//     s1.show();
//     s2.show();
// }


#include<bits/stdc++.h>
using namespace std;

class bank {
    int balance;
    string name;
    static int totalvalue;
    public:
    void set(int balance,string name);
    void show();
    void total();
};int bank::totalvalue;

void bank::set(int be,string ne){
    balance=be;
    name=ne;
    totalvalue=be;
}
void bank::show(){
    cout<<balance<<endl;
    cout<<name<<endl;
}
void bank::total(){
    cout<<totalvalue<<endl;
}

int main(){
    bank user1,user2;
    user1.set(200,"utsav");
    user1.show();
    user1.total();
    user2.set(300,"singh");
    user2.show();
    user2.total();
    user1.set(500,"utsav");
    user1.show();
    user1.total();
    // user2.show();
}