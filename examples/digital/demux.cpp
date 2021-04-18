#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){

    //DEMUX testing
    Circuits c1;

    vector<bool> ans1 = c1.demux(0,{0,0});
    vector<bool> ans2 = c1.demux(1,{0,0});
    vector<bool> ans3 = c1.demux(0,{0,1});
    vector<bool> ans4 = c1.demux(1,{0,1});
    vector<bool> ans5 = c1.demux(0,{1,0});
    vector<bool> ans6 = c1.demux(1,{1,0});
    vector<bool> ans7 = c1.demux(0,{1,1});
    vector<bool> ans8 = c1.demux(1,{1,1});

    for(int i = 0 ; i < ans1.size() ; i++ ) cout << ans1[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans2.size() ; i++ ) cout << ans2[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans3.size() ; i++ ) cout << ans3[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans4.size() ; i++ ) cout << ans4[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans5.size() ; i++ ) cout << ans5[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans6.size() ; i++ ) cout << ans6[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans7.size() ; i++ ) cout << ans7[i] << " ";
    cout << endl;
    for(int i = 0 ; i < ans8.size() ; i++ ) cout << ans8[i] << " ";
    return 0;
}