#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){

    //MUX testing
    Circuits c1;

    bool ans1 = c1.mux({1,0,0,1},{0,0});
    bool ans2 = c1.mux({1,0,0,1},{0,1});
    bool ans3 = c1.mux({1,0,0,1},{1,0});
    bool ans4 = c1.mux({1,0,0,1},{1,1});

    cout << ans1 << endl << ans2 << endl << ans3 << endl << ans4<< endl;
    return 0;
}