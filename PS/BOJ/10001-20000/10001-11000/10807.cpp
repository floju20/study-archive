#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int counter;
    cin >> counter;

    int array[100];
    
    for(int i = 0; i < counter; i++) {
        cin >> array[i];
    }

    int num;
    cin >> num;

    cout << count(array, array + counter, num);

    return 0;
}