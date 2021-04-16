#include<bits/stdc++.h>

class Gates{
    private:
        // Inputs, Output variables gets stored here. 
    public:
        // public methods

        int not_gate(int val);
        int and_gate(int n_args, ...);
        int or_gate(int n_args, ...);
        int nand_gate(int n_args, ...);
        int nor_gate(int n_args, ...);
        int xor_gate(int n_args, ...);
        int xnor_gate(int n_args, ...);
};

inline int Gates::not_gate(int val){
    return ~val;
}

inline int Gates::and_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int and_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        and_res = and_res & a;
    }
    va_end(ap);
    return and_res;
}

inline int Gates::or_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int or_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        or_res = or_res | a;
    }
    va_end(ap);
    return or_res;
}

inline int Gates::nand_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int and_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        and_res = and_res & a;
    }
    va_end(ap);
    int nand_res = ~and_res;
    return nand_res;
}

inline int Gates::nor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int or_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        or_res = or_res | a;
    }
    va_end(ap);
    int nor_res = ~or_res;
    return nor_res;
}

inline int Gates::xor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int xor_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        xor_res = xor_res ^ a;
    }
    va_end(ap);
    return xor_res;
}

inline int Gates::xnor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    int xor_res = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        xor_res = xor_res ^ a;
    }
    va_end(ap);
    int xnor_res = ~xor_res;
    return xnor_res;
}