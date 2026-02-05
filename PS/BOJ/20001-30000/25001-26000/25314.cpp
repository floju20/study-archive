#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    while(num >= 4){
        cout << "long ";
        num = num - 4;
    }
    cout << "int";

    return 0;
}