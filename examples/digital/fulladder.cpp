#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){

    //Full_Adder testing
    Circuits c1;

    pair<bool,bool> ans1 = c1.full_adder(0,0,0);
    pair<bool,bool> ans2 = c1.full_adder(0,0,1);
    pair<bool,bool> ans3 = c1.full_adder(0,1,0);
    pair<bool,bool> ans4 = c1.full_adder(0,1,1);
    pair<bool,bool> ans5 = c1.full_adder(1,0,0);
    pair<bool,bool> ans6 = c1.full_adder(1,0,1);
    pair<bool,bool> ans7 = c1.full_adder(1,1,0);
    pair<bool,bool> ans8 = c1.full_adder(1,1,1);
    
    cout << ans1.first << " " << ans1.second << "\n";
    cout << ans2.first << " " << ans2.second << "\n";
    cout << ans3.first << " " << ans3.second << "\n";
    cout << ans4.first << " " << ans4.second << "\n";
    cout << ans5.first << " " << ans5.second << "\n";
    cout << ans6.first << " " << ans6.second << "\n";
    cout << ans7.first << " " << ans7.second << "\n";
    cout << ans8.first << " " << ans8.second << "\n";

    return 0;
}