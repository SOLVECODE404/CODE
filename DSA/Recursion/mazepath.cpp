#include<bits/stdc++.h>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec)return 0;
    if(sr==er||sc==ec)return 1;
    int rigtways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rigtways+downways;
    return totalways;
}

int maze2(int row,int col){
    if (row<1|| col<1)
        return 0;
    if (row==1 && col==1)
        return 1;
    int rigtways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int totalways = rigtways + downways;
    return totalways;
}

void print(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec)return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return; 
    }
    print(sr,sc+1,er,ec,s+"R");
    print(sr+1,sc,er,ec,s+"D");
}

void print2(int row ,int col,string s){
    if(row<1||col<1)return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return ;
    }
    print2(row,col-1,s+"R");
    print2(row-1,col,s+"D");
}

int main(){
    // print2(2,4,"");

}