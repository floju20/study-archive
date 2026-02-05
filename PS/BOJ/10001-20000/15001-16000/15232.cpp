#include <iostream>

using namespace std;

int main(){
    int c_line, c_count;
    cin >> c_line >> c_count;
    
    for(int line = 0; c_line > line; line++){
        for(int star = 0; c_count > star; star++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}