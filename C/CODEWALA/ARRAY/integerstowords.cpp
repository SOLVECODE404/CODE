#include <bits/stdc++.h>
using namespace std;
static string name[]={"zero","one","two","three","four"};
void toPrint(int n){
    if(n==0)return ;
    else{
        toPrint(n/10);
        cout<<name[n%10]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    toPrint(n);
}