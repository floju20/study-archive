#include <iostream>

using namespace std;

int main(){
    int dan;
    int num = 1;

    cin >> dan;
    
    while (num < 10){
        cout << dan << " * " << num << " = " << dan*num << "\n";
        num++;
    }
    return 0;
}