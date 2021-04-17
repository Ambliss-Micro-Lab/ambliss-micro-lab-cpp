#include "./Gates.h"
#include<bits/stdc++.h>
using namespace std;

class Combinational: public Gates{
    private:
        // Inputs, Output variables gets stored here.
        
    public:
        // public methods

        void half_adder(int x, int y, int* sum, int* carry);
        void full_adder(int x, int y, int cin, int* sum, int* carry);
        
        //implement mux
        bool mux(vector<int> data,vector<int> sel); 
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
inline bool Combinational::mux(vector<int> data,vector<int> sel){
    int ind=0;
    for(int i=0;i<sel.size();i++){
        ind=ind*2+sel[i];
    }
    return data[ind];
}