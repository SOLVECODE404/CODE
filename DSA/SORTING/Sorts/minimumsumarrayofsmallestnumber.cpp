#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v{5,1,2,5,5,3};
    int n=v.size();
    sort(v.begin(),v.end());//smallest min no
    int x=0;{//change array into number
        for(int i=0;i<n;i++){
            x*=10;
            x+=v[i];
        }
    }
    for(int i=n-1;i>=0;i--){//second last minimum no
            if(v[i]!=v[i-1]){   
            swap(v[i],v[i-1]);
            break;
        }
    }
    int k = 0;
    {
        for (int i = 0; i < n; i++)//array into no
        {
            k *= 10;
            k+= v[i];
        }
    }
    cout<<"The sum is:"<<x+k;//smallest two number sum
}