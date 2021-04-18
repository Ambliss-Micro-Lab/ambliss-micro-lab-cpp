#include "../include/digital/Combinational.h"
#include "../include/include.h"

class Circuits: public Combinational{
    private:
        // Inputs, Output variables gets stored here. 
        int num_inp;
        int num_ops;
        vector<int*> inputs;
        vector<int*> outputs;
        
    public:
        // public methods
        // create set_inputs, set_outputs method
        void setInputs(int n_args, ...);
        void setOutputs(int n_args, ...);
        vector<int*> getInputs(){
            return inputs;
        }
        vector<int*> getOutputs(){
            return outputs;
        }
};

inline void Circuits::setInputs(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    num_inp = n_args;
    for(int i = 0; i < num_inp; i++) {
        int* a = va_arg(ap, int*);
        inputs.push_back(a);
    }
    va_end(ap);
}

inline void Circuits::setOutputs(int n_args, ...){

    va_list ap;
    va_start(ap, n_args);
    num_ops = n_args;
    for(int i = 0; i < num_ops; i++) {
        int* a = va_arg(ap, int*);
        outputs.push_back(a);
    }
    va_end(ap);
}