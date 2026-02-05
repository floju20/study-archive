#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    
    for(int line = num; line >= 1; line--){
        for(int star = 0; star < line; star++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}