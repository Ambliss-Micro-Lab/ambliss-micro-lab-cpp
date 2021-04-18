#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){
    Circuits c1;

    bool A = true, B = true, C = false; // inputs
    bool F; // outputs

    c1.setInputs(3, &A, &B, &C);
    c1.setOutputs(1, &F);

    bool wire1 = c1.and_gate(2,A,B);
    bool wire2 = c1.and_gate(2,B,C);

    F = c1.or_gate(2,wire1,wire2);

    cout << "F = " << F << endl;
    vector<bool> ans1 = c1.decoder({0,0});
    vector<bool> ans2 = c1.decoder({0,1});
    vector<bool> ans3 = c1.decoder({1,0});
    vector<bool> ans4 = c1.decoder({1,1});

    for(int i=0;i<ans1.size();i++) cout<<ans1[i]<<" ";
    cout<<endl;
    for(int i=0;i<ans2.size();i++) cout<<ans2[i]<<" ";
    cout<<endl;
    for(int i=0;i<ans3.size();i++) cout<<ans3[i]<<" ";
    cout<<endl;
    for(int i=0;i<ans4.size();i++) cout<<ans4[i]<<" ";
    return 0;
}