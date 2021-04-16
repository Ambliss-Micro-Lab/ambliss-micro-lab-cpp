class Gates{
    private:
        // Inputs, Output variables gets stored here. 
    public:
        // public methods

        int not_gate(int val);
        int and_gate(int val1, int val2);
        int or_gate(int val1, int val2);
        int nand_gate(int val1, int val2);
        int nor_gate(int val1, int val2);
        int xor_gate(int val1, int val2);
        int xnor_gate(int val1, int val2);
};

inline int Gates::not_gate(int val){
    return ~val;
}

inline int Gates::and_gate(int val1, int val2){
    return val1 & val2;
}

inline int Gates::or_gate(int val1, int val2){
    return val1 | val2;
}

inline int Gates::nand_gate(int val1, int val2){
    return ~(val1 & val2);
}

inline int Gates::nor_gate(int val1, int val2){
    return val1 | val2;
}

inline int Gates::xor_gate(int val1, int val2){
    return val1 ^ val2;
}

inline int Gates::xnor_gate(int val1, int val2){
    return ~(val1 ^ val2);
}