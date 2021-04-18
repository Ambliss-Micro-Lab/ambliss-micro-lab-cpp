#include<bits/stdc++.h>
using namespace std;

class Circuits {
 public:

    // // Methods from Circuits class
    // void setInputs(int n_args, ...);
    // void setOutputs(int n_args, ...);
    // vector<int*> getInputs();
    // vector<int*> getOutputs();

    // Methods from Gates class
    bool not_gate(bool val);
    bool and_gate(int n_args, ...);
    bool or_gate(int n_args, ...);
    bool nand_gate(int n_args, ...);
    bool nor_gate(int n_args, ...);
    bool xor_gate(int n_args, ...);
    bool xnor_gate(int n_args, ...);

    // Methods from Combinational class
    pair<bool, bool> half_adder(bool x, bool y);
    pair<bool, bool> full_adder(bool x, bool y, bool cin);
    pair<bool, bool> half_subtractor(bool x, bool y);
    pair<bool, bool> full_subtractor(bool x, bool y, bool bin);
    bool mux(vector<bool> data , vector<bool> sel);
    vector<bool> demux(bool data , vector<bool> sel); 
    vector<bool> encoder(vector<bool> data);
    vector<bool> decoder(vector<bool> sel);
};