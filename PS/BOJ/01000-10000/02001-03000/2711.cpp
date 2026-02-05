#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){
    int counter;
    cin >> counter;

    pair<int,string> p;

    for(int i = 0; i < counter; i++){

        cin >> p.first >> p.second;

        cout << p.second.erase(p.first-1,1) << "\n";
    }
    return 0;

}