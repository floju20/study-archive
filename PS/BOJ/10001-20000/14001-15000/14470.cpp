#include <iostream>

using namespace std;

int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int time = 0;

    if (A < 0){
    time += (-A) * C;
    A = 0;
    }

    if (A == 0){
        time += D;
    }

    time += (B-A) * E;
    
    cout << time;

    return 0;


}