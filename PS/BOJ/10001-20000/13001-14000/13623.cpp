#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c) {
        cout << "*";
    }
    else if (a == b && a != c) {
        cout << "C";
    }
    else if (a==c && a != b){
        cout << "B";
    }
    else if (b==c && b!= a){
        cout << "A";
    }
    return 0;
}