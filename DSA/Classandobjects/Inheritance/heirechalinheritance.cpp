#include<bits/stdc++.h>
using namespace std;
class A{};
class B:public A{};
class C:public A{};

int main(){
    //both the function has inheritance of class a so both can accese for different reason
    B aa;
    C bb;
}