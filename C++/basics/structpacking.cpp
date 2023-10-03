#include<iostream>
using namespace std;
// #pragma pack(1)

struct abc{
    char a;
    int c;
    char b;
};
int main(){
    struct abc a;
    cout<<sizeof(a)<<endl;
}     