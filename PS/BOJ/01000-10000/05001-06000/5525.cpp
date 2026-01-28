#include <iostream>

using namespace std;

int main(){
    int num;
    int basic = 0;

    while(cin >> num){
        basic = basic + num;
    }
    cout << basic;
    
    return 0;
}