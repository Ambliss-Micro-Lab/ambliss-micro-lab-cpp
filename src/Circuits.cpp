#include "./Circuits.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    Circuit::Digital::Gates::And and_gt;
    and_gt.input(5,4);
    int f = and_gt.output();
    int a;
    cin >> a; 
    cout << f;
}