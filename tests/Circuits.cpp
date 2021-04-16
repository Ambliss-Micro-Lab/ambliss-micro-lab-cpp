#include "../src/Circuits.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    Circuits c1;

    int A = 11,B = 4,C = 0; // inputs
    int F; // outputs

    c1.setInputs(3, &A, &B, &C);
    c1.setOutputs(1, &F);

    int wire1 = c1.and_gate(2,A,B);
    int wire2 = c1.and_gate(2,B,C);

    F = c1.or_gate(2,wire1,wire2);

    cout << "F = " << F << endl;

    return 0;
}