#include "../../src/Circuits.h"
#include "../../include/include.h"

int main(){

    //Half_Adder testing
    Circuits c1;

    pair<bool,bool> ans1 = c1.half_adder(0,0);
    pair<bool,bool> ans2 = c1.half_adder(0,1);
    pair<bool,bool> ans3 = c1.half_adder(1,0);
    pair<bool,bool> ans4 = c1.half_adder(1,1);

    cout << ans1.first << " " << ans1.second << "\n";
    cout << ans2.first << " " << ans2.second << "\n";
    cout << ans3.first << " " << ans3.second << "\n";
    cout << ans4.first << " " << ans4.second << "\n";
    return 0;
}