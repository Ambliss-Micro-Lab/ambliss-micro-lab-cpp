#include "../include.h"

class Gates{
    private:
        // Inputs, Output variables gets stored here. 
    public:
        // public methods

        bool not_gate(bool val);
        bool and_gate(int n_args, ...);
        bool or_gate(int n_args, ...);
        bool nand_gate(int n_args, ...);
        bool nor_gate(int n_args, ...);
        bool xor_gate(int n_args, ...);
        bool xnor_gate(int n_args, ...);
};

inline bool Gates::not_gate(bool val){
    return !val;
}

inline bool Gates::and_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool and_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        and_res = and_res & a;
    }
    va_end(ap);
    return and_res;
}

inline bool Gates::or_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool or_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        or_res = or_res | a;
    }
    va_end(ap);
    return or_res;
}

inline bool Gates::nand_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool and_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        and_res = and_res & a;
    }
    va_end(ap);
    bool nand_res = !and_res;
    return nand_res;
}

inline bool Gates::nor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool or_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        or_res = or_res | a;
    }
    va_end(ap);
    bool nor_res = !or_res;
    return nor_res;
}

inline bool Gates::xor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool xor_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        xor_res = xor_res ^ a;
    }
    va_end(ap);
    return xor_res;
}

inline bool Gates::xnor_gate(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    bool xor_res = va_arg(ap, int);
    bool a;
    for(int i = 2; i <= n_args; i++) {
        a = va_arg(ap, int);
        xor_res = xor_res ^ a;
    }
    va_end(ap);
    bool xnor_res = !xor_res;
    return xnor_res;
}