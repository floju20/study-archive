#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int array[100][100];
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cin >>  array[i][j];
        } 
    }
    for(int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            int b;
            cin >> b;

            cout << array[i][j] + b;
            if (j != m - 1) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}