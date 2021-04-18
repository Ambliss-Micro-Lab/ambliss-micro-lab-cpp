#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){
    Circuits c1;

    bool A = true, B = true, C = false; // inputs
    bool F; // outputs

    c1.setInputs(3, &A, &B, &C);
    c1.setOutputs(1, &F);

    bool wire1 = c1.and_gate(2,A,B);
    bool wire2 = c1.and_gate(2,B,C);

    F = c1.or_gate(2,wire1,wire2);

    cout << "F = " << F << endl;

    return 0;
}