#include <iostream>

using namespace std;

int main(){
    long long num1; 
    string math; 
    long long num2;
    cin >> num1 >> math >> num2;

    if (math == "*"){
        cout << num1 * num2;
    }
    else if (math == "+"){
        cout << num1 + num2;
    }
    return 0;
}