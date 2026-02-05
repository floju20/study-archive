#include <iostream>
#include <string>

using namespace std;

int main(){
    int count;
    cin >> count;

    for(int doro = 0; doro < count; doro++){
        string words;
        cin >> words;

        cout << words << "DORO ";
    }

    return 0;
}