#include <iostream>

using namespace std;

int main(){
    int num, base;
    base = 0;
    cin >> num;
    while(num >= 0){
        base = base + num;
        num--;
    }
    cout << base;
    return 0;
}