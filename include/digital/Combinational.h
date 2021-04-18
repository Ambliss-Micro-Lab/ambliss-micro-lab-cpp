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

        bool mux(vector<bool> data , vector<bool> sel); 
        
        //implement demux

        vector<bool> demux(bool data , vector<bool> sel); 

        //implement encoder
 
        vector<bool> encoder(vector<bool> data);

        //implement decoder

        vector<bool> decoder(vector<bool> sel);
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

inline bool Combinational::mux(vector<bool> data,vector<bool> sel){
    int ind = 0;
    for(int i = 0 ; i < sel.size() ; i++){
        ind = ind * 2 + sel[i];
    }
    return data[ind];
}

inline vector<bool> Combinational::demux(bool data , vector<bool> sel){
    int ind = 0;
    for(int i = 0 ; i < sel.size() ; i++){
        ind = ind * 2 + sel[i];
    }
    int n = pow(2,sel.size());
    vector<bool> out(n,false);
    out[ind] = data;
    return out;
}
inline vector<bool> Combinational::encoder(vector<bool> data){
    int ind;
    for(int i = 0 ; i < data.size() ; i++){
        if(data[i] == true){
            ind = i;
            break;
        }
    }
    int num = data.size() - ind - 1;

    // finding the select lines
    
    int n = log2(data.size());
    vector<bool> sel(n,0);
    int i = n - 1;
     while(num!=0){
        sel[i] = num%2;
        num = num/2;
        i--;
    }
    return sel;
}
inline vector<bool> Combinational::decoder(vector<bool> sel){
    int ind = 0;
    for(int i = 0 ; i < sel.size() ; i++){
        ind = ind * 2 + sel[i];
    }
    int n = pow(2,sel.size());
    vector<bool> data(n,0);
    data[n-ind-1] = true;
    return data;
}