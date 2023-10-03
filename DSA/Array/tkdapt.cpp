#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int space=n-i;
    for(int k=0;k<space;k++){
        cout<<" ";
    }
    int no_of_chars=2*i-1;
    for(int j=0;j<no_of_chars;j++){
        char ch=(char)('A'+j);
        cout<<ch;
    }
    cout<<endl;
    }
    for(int j=n+1;j<=2*n-1;j++){
        int space=j-n;
        for(int l=0;l<space;l++){   
            cout<<" ";
        }
        int downpattern=2*(2*n-j)-1;
        for(int m=0;m<downpattern;m++){
            char g=(char)('A'+m);
            cout<<g;
        }cout<<endl;
    }
    return 0;
}