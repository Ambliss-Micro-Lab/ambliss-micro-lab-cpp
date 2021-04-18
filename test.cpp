#include "ambliss_micro_lab.h"

int main(){
   
    // Example 1 : F1 = AB + BC
    Circuits c1;

    bool A = true, B = true, C = false; // inputs
    bool F1; // outputs

    c1.setInputs(3, &A, &B, &C);
    c1.setOutputs(1, &F1);

    bool wire1 = c1.and_gate(2,A,B);
    bool wire2 = c1.and_gate(2,B,C);

    F1 = c1.or_gate(2,wire1,wire2);
    
    cout << "AB + BC = " << F1 << endl;

    // Example 2 : F2 = X&Y&not(Z) + X&not(Y)&Z

    Circuits c2;

    bool X = true, Y = true, Z = false; // inputs
    bool F2; // outputs

    c2.setInputs(3, &X, &Y, &Z);
    c2.setOutputs(1, &F2);

    wire1 = c2.and_gate(2,X,Y);
    wire2 = c2.not_gate(Z);
    bool wire3 = c2.and_gate(2,wire1,wire2);
    bool wire4 = c2.and_gate(2,X,Z);
    bool wire5 = c2.not_gate(Y);
    bool wire6 = c2.and_gate(2,wire4,wire5);

    F2 = c2.or_gate(2,wire3,wire6);
    
    cout << "X & Y & not(Z) + X & not(Y) & Z = " << F2 << endl;


    // Example 3 : F3 = P ^ Q & R ^ S

    Circuits c3;

    bool P = true, Q = true, R = false , S = false; // inputs
    bool F3; // outputs

    c3.setInputs(4, &P, &Q, &R ,&S);
    c3.setOutputs(1, &F3);

    wire1 = c3.xor_gate(2,P,Q);
    wire2 = c3.and_gate(2,wire1,R);
    F3 = c3.xor_gate(2,wire2,S);
    
    cout << "P ^ Q & R ^ S = "<< F3 << endl;

    // Example 4 : F4 = nor( nand( xnor( D, E ), F), G )

    Circuits c4;

    bool D = true, E = false, F = true , G = false; // inputs
    bool F4; // outputs

    c4.setInputs(4, &D, &E, &F ,&G);
    c3.setOutputs(1, &F4);

    wire1 = c4.xnor_gate( 2, D, E);
    wire2 = c4.nand_gate( 2, wire1, F);
    F4 = c4.nor_gate( 2, wire2, G);
    
    cout << "nor( nand( xnor( D, E ), F), G ) = "<< F4 << endl;
    return 0;
}