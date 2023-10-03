#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
}
// it basically works on the order of ascii value 
// and that is a drawback of this algorithm....
