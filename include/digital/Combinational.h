#include "./Gates.h"

class Combinational: public Gates{
    private:
        // Inputs, Output variables gets stored here.
        
    public:
        // public methods

        void half_adder(int x, int y, int* sum, int* carry);
        void full_adder(int x, int y, int cin, int* sum, int* carry);
};

inline void Combinational::half_adder(int x, int y, int* sum, int* carry){
    *sum = xor_gate(2,x,y);
    *carry = and_gate(2,x,y);
}

inline void Combinational::full_adder(int x, int y, int cin, int* sum, int* carry){
    *sum = xor_gate(3,x,y,cin);

    int wire1 = and_gate(2,x,y);
    int wire2 = and_gate(2,cin,x);
    int wire3 = and_gate(2,cin,y);
    
    *carry = or_gate(3,wire1,wire2,wire3);
}