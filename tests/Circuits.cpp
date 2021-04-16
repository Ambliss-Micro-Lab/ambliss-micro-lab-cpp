#include "../src/Circuits.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    Circuits c1;

    int A = 0,B = 0,C = 0; // inputs
    int F; // outputs

    c1.setInputs(3, &A, &B, &C);
    c1.setOutputs(1, &F);

    int wire1 = c1.and_gate(A,B);
    int wire2 = c1.and_gate(B,C);

    F = c1.or_gate(wire1,wire2);

    return 0;
}