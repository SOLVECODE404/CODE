#include<bits/stdc++.h>
using namespace std;

class A{};
class B:public A{};
class C{};
class D:public B,public C{};
int main(){}

//as all are linked in different way therefore hybrid