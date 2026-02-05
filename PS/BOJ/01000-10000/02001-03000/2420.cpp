#include <iostream>

using namespace std;

int main(){
    long long num1, num2;
    cin >> num1 >> num2;
    if (num1 - num2 < 0){
        cout << -(num1 - num2);
    }
    else {
        cout << num1 - num2;
    }
    return 0;
}