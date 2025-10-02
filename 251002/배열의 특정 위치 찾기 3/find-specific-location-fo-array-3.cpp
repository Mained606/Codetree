#include <iostream>
using namespace std;

int main() {
    int n[100];
    int sum = 0;

    for(int i = 0; i < 100; i++) {
        cin >> n[i];

        if(n[i] == 0) {
            for(int j = i-1; j >= i-3; j--) {
                sum += n[j];
            }
            break;
        }
    }

    cout << sum;

    return 0;
}