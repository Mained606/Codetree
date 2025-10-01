#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum = 0;
    int a = 0;

    cout << fixed;
    cout.precision(1);

    for(int i = 1; i <= 10; i++) {
        cin >> n[i];
        a = i;
        if(n[i] >= 250) {
            break;
        }
        else {
            sum += n[i];
        }
    }

    cout << sum << " ";
    cout << (float)sum / a;


    return 0;
}