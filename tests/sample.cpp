#include<bits/stdc++.h>
using namespace std;

void variable_length_arg_func(int n_args, ...){
    
    va_list ap;
    va_start(ap, n_args);
    for(int i = 0; i < n_args; i++) {
        int a = va_arg(ap, int);
        cout << a << endl;
    }
    va_end(ap);
}