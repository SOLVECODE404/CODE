#include<iostream>
using namespace std;

enum xenum{c,cpp,java};
enum yenum{xenum};
enum boolean{False,True};

int main(){
    enum yenum s;
    cout<<sizeof(s)<<endl;
}   

// int main(){
//     enum boolean var;
//     var=True;
//     cout<<var<<endl;
// }