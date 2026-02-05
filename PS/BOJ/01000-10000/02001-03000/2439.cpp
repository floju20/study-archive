#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int line = 1; line <= N; line++) {
        for (int blank = 0; blank < N - line; blank++) {
            cout << " ";
        }
        for (int star = 0; star < line; star++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
