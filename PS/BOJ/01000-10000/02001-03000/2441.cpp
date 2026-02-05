#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int line = 1; line <= N; line++) {
        for (int blank = 0; blank < line - 1; blank++) {
            cout << " ";
        }
        for (int star = 0; star < N - line + 1; star++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
