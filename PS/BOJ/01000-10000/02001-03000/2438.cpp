#include <iostream>

using namespace std;

int main(){
    int A;
    cin >> A;
    for(int line = 1; line <= A; line++){
        for (int i = 0; i < line; i++){
        cout << "*";
    }
    cout << "\n";
    }
    return 0;
}