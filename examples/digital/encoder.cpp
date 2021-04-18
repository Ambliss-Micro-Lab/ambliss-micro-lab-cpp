#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){

    //Encoder testing
    Circuits c1;

    vector<bool> ans1 = c1.encoder({0,0,0,1});
    vector<bool> ans2 = c1.encoder({0,0,1,0});
    vector<bool> ans3 = c1.encoder({0,1,0,0});
    vector<bool> ans4 = c1.encoder({1,0,0,0});

    for(int i = 0 ; i < ans1.size() ; i++ ) cout << ans1[i] << " ";
    cout << endl;
    for(int i = 0 ; i <ans2.size() ; i++ ) cout << ans2[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans3.size() ; i++ ) cout << ans3[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans4.size() ; i++ ) cout << ans4[i] << " ";
    return 0;
}