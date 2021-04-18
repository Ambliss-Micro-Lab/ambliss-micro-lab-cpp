#include "./Gates.h"
#include "../include.h"

class Combinational: public Gates{
    private:
        // Inputs, Output variables gets stored here.
        
    public:
        // public method
        pair<bool, bool> half_adder(bool x, bool y);
        pair<bool, bool> full_adder(bool x, bool y, bool cin);
        pair<bool, bool> half_subtractor(bool x, bool y);
        pair<bool, bool> full_subtractor(bool x, bool y, bool bin);
  
        //implement mux
        bool mux(vector<bool> data , vector<bool> sel); 
        
        //implement demux
        vector<bool> demux(bool data , vector<bool> sel); 

        //implement encoder
        vector<bool> encoder(vector<bool> data);

        //implement decoder
        vector<bool> decoder(vector<bool> sel);
};

inline pair<bool, bool> Combinational::half_adder(bool x, bool y){
    bool sum = xor_gate(2,x,y);
    bool carry = and_gate(2,x,y);
    pair<bool, bool> res(sum,carry);
    return res;
}

inline pair<bool, bool> Combinational::full_adder(bool x, bool y, bool cin){
    bool sum = xor_gate(3,x,y,cin);

    bool wire1 = and_gate(2,x,y);
    bool wire2 = and_gate(2,cin,x);
    bool wire3 = and_gate(2,cin,y);
    
    bool carry = or_gate(3,wire1,wire2,wire3);

    pair<bool, bool> res(sum,carry);
    return res;
}

inline pair<bool, bool> Combinational::half_subtractor(bool x, bool y){
    bool difference = xor_gate(2,x,y);
    bool x_bar = not_gate(x);
    bool borrow = and_gate(2,x_bar,y);
    pair<bool, bool> res(difference,borrow);
    return res;
}

inline pair<bool, bool> Combinational::full_subtractor(bool x, bool y, bool bin){
    bool difference = xor_gate(3,x,y,bin);

    bool x_bar = not_gate(x);

    bool wire1 = and_gate(2,x_bar,bin);
    bool wire2 = and_gate(2,x_bar,y);
    bool wire3 = and_gate(2,y,bin);
    
    bool borrow = or_gate(3,wire1,wire2,wire3);

    pair<bool, bool> res(difference,borrow);
    return res;
}

inline bool Combinational::mux(vector<bool> data,vector<bool> sel){
    int ind=0;
    for(int i=0;i<sel.size();i++){
        ind=ind*2+sel[i];
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