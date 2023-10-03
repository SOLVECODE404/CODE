#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
//     if(n==0||n==1)return 1;
//     return n*fact(n-1);
// }

// int main(){
//     cout<<fact(5)<<endl;
// }

// .....................

// int sum(int n){
//     if (n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(5);
// }

// .............................
// void increasing (int i,int n){
//     if(i>n)return ;
//     cout<<i<<" ";
//     increasing(i+1,n);
//     if(i>1)cout<<i- 1<<" ";
// }
// int main(){
//     increasing(1,4);
// }

// ............................................

    void printsumodd(int a, int b, int &sum)
    {
        if (a > b)
            return;
        if (a % 2 != 0)
        {
            sum += a;
            printsumodd(a + 2, b, sum);
        }
    }

    int main()
    {
        int sum = 0;
        printsumodd(3, 9, sum);
        cout << sum;
    }
