#include<iostream>
using namespace std;

// it basically allocates the memory to upcoming variable and thats why it saves the memory

// union abc{
//     int id;
//     int marks;
// };
// int main(){
//     union abc s;
//     cin>>s.id;
//     cin>>s.marks;  
//     cout<<s.id;
//     cout<<s.marks;
// }

// pointer in unions

union abc{
    int r;
    int m;
};
int main(){
    union abc u;
    union abc *ptr;
    ptr=&u;
    u.r=1;
    u.m=20;
    cout<<ptr->m;   
    cout<<ptr->r;
}
