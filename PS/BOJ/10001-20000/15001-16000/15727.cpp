#include <iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    int minutes;

    if (num % 5 == 0) {
        minutes = num/5;
    }

    else {
        minutes = (num/5) + 1;
    }

    cout << minutes << endl;
    
    return 0;

}