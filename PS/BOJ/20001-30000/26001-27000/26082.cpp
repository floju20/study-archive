#include <iostream>

using namespace std;

int main(){
    int e_price, e_work, w_price;
    cin >> e_price >> e_work >> w_price;

    cout << (e_work/e_price) * w_price * 3;
    return 0;
}