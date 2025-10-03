#include <iostream>
using namespace std;

int main() {
    int n[10];
    for(int i = 0; i < 2; i++) {
        cin >> n[i];
        cout << n[i] << " ";
    }

    for(int i = 2; i < 10; i++) {
        n[i] = (n[i-1] + n[i-2]) % 10;
        cout << n[i] << " ";
    }
    return 0;
}